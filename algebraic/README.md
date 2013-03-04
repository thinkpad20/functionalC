Musings and plannings: the beginnings of a true functional extension to C

At the urging of a friend of mine, I've begun to take interest in the functional programming paradigm. The paradigm offers many advantages which I don't need to enumerate here but include code readability, a high level of abstraction without loss of power, code safety and compatibility with multi-threaded methods. My favorite programming language, however, is C, which I love for its simplicity, efficiency and bit-level precision of routines.

Someone else at my school came up with some ways to "hack" functional programming into C. He introduced a fundamental list data type and using it, incorporated closures, maps, and a few other functional staples. Although the idea was somewhat in jest, and on its own demonstrated only a weak ability for C to be functional, it was nonetheless interesting, and I played around a bit with what he had come up with. Thinking more about it, I reasoned that C, being a very small and simple language, is quite readibly extensible. After all its most famous child C++ simply began by extending C with some ideas from object-oriented programming. My ideas on C++ notwithstanding, it remains the case that C provides an excellent framework upon which to append ideas. C++ originally compiled to C, and this made me wonder if I might not be able to accomplish something similar by designing some functional structures which I could paste on top of C, allowing me to use my favorite language while having access to some of the great things to be found in functional languages. Here are some of the ideas I've come up with - most are rudimentary to say the least, but I'd like to think they have promise.

One of the most advantageous aspects of Haskell are its algebraic types, especially when combined with its potent pattern-matching capabilities. In sketching out the ways in which C could be extended to adopt the functional paradigm, natively incorporating these along with other features of Haskell is an appealing prospect. Let's examine how we might do this.

Here's an example of an algebraic data type in Haskell (from Real World Haskell chapter 3):

```haskell
data BillingInfo = CreditCard CardNumber CardHolder Address
                 | CashOnDelivery
                 | Invoice CustomerID
```

Here's an implementation of the same idea in C:

```c
typedef struct BillingInfo BillingInfo; 
struct BillingInfo {
	enum { CreditCard_t, CashOnDelivery_t, Invoice_t } t;
	union {
		struct { int CardNumber; char *CardHolder; char *Address; } CreditCard;
		/* note that we don't need a struct to hold CashOnDelivery */
		struct { char *CustomerID; } Invoice;
	} data;
};

BillingInfo 
CreditCard(int CardNumber, char *CardHolder, char *Address) {
	BillingInfo bi;
	bi.t = CreditCard_t;
	bi.data.CreditCard.CardNumber = CardNumber;
	bi.data.CreditCard.CardHolder = CardHolder;
	bi.data.CreditCard.Address = Address;
	return bi;
}

BillingInfo 
CashOnDelivery(void) {
	BillingInfo bi;
	bi.t = CashOnDelivery_t;
	return bi;
}

BillingInfo 
Invoice(char *CustomerID) {
	BillingInfo bi;
	bi.t = Invoice_t;
	bi.data.Invoice.CustomerID = CustomerID;
	return bi;
}

```

As we can see, this is both verbose, and . Furthermore, it's not safe - although the enum, if queried, will tell us the type of of BillingInfo we're dealing with, we cannot guarantee that it's being used properly, and it is subject to arbitrary change. A much cleaner syntax would mirror that of Haskell:

```
data BillingInfo {
	CreditCard(String cardNumber, String cardHolder, String address)
	CashOnDelivery()
	Invoice(String customerID)
}
```

Isn't that much better? In a functional C language, the above representation would be a concise way to tell the compiler to generate objects as we had seen above (along, possibly, with some additional functions which we might use for pattern matching, "deriving", etc). Note that we're tentatively getting rid of semicolons for as clean an interface as possible. This may be changed if it complicates parsing. Also note that if we want to keep this language a strict superset of C, then we might want to write `data` as `@data` or some other way to guarantee there won't be name conflicts. If only for aesthetic purposes, however, I'll keep it this way for now.

Another useful feature to be found in a language like Haskell is case-based function declarations. Take the following definition of the sum of a list in Haskell:

```haskell
sumList :: [Int] -> Int
sumList [] = 0
sumList (x:xs) = x + sumList xs

```

We could mirror this in C:

```c
struct list {
	int val;
	struct list *next;
};

int sumList(struct list *l) {
	if (l.next == NULL)
		return 0;
	return l->val + sumList(l->next); 
}

```

Now in this case, the C version isn't significantly longer than the Haskell, nor is it more difficult to understand. However, there are many cases where this is not the case, and having the ability to simply define base case/nth case, or even multiple disparate cases, comes in handy. Let's formulate a (prototypical) syntax for this in functional C:

```
int sumList(list *l) {
	sumList (l : l->next == NULL) { 
		return 0 
	}
	sumList (l) { 
		return l->val + sumList(l->next) 
	}
}
```

As in Haskell, this function will be evaluated in a fall-through manner. The first definition for which the predicate is true will be evaluated.

In functional programming, the singly-linked list will be such a fundamental data structure that it's probably best to make it a primitive, wrapped around something like:

```c
struct list {
	void *data;
	struct list *next;
}
```

Note that this may not actually be the internal representation of a list, especially if we create list using the algebraic type system (which is what we'll do - see below). Either way, let's assume that this can be denoted with a new primitive data type list (as with data, we may want to add an at sign to facilitate functional C being a strict superset of C). Let's also assume that we have some notation and operators that are essential for lists:

```
list!int *l           // l a pointer to a struct list with void * effectively set to int *. Note we're using the ! syntax from D.
boolean isEmpty = !l  // isEmpty is true (the ! operator on a list l is the same thing as "l->next == NULL")
l = [1, 3, 5, 7]      // the compiler can read that l is a list of ints and construct it accordingly
int a = .l            // a == 1
list!int *l2 = l..    // l2 == {3, 5, 7}
```

Keep in mind that all of these operators are tentative, but we definitely want to have an easy way to denote the head and tail of a list. We'll get to the pattern matching stuff later (I hope). OK, now that we have some operators, let's see if we can simplify our sumList function:

```
int sumList(list!int *l) {
	sumList(l | !l) {
		return 0
	}
	sumList(l) {
		return .l + sumList(l..)
	}
}

```

What if we simplified it a bit further? Note that I'm still just kinda spitballing...

```
int sumList(list!int *l) {
	match (!l) => { return 0 }
	match (l) => { return .l + sumList(l..) }
}
```

Now let's employ several more steps of evolution. We'll allow curly braces to be omitted as long as the function body is only one line. We'll borrow the keyword "auto" and use it in the D/C++ way, to indicate that the return value is inferred. Similarly, we won't explicitly define what kind of list l is. We'll drop the * from the list variable -- as a primitive data type, it's pointer-ness should be implied anyway (there could perhaps be special mechanisms to create non-heap list nodes). And we'll declare that the final statement of any function is assumed to be a return (allowing a return to be explicitly declared if desired). This would give us:

```
auto sumList(list l) {
	match (!l) => 0
	match (l) => .l + sumList(l..)
}
```

Now we're really looking quite different! Let's restate our list examples with the clean syntax:

```
list a                // note that list is intrinsically parametric, so not declaring a type simply means it will be inferred later.
boolean isEmpty = !a  // isEmpty is true
a = [1, 3, 5, 7]      // At this point, the type of a has been recorded and cannot be changed.
int i = .a            // i == 1
auto b = a..          // b == {3, 5, 7}. "list b = a.." would also be valid.
```

Let's imagine how this would look given an algebraic-type definition of a list. In Haskell, a list is defined as:

```haskell
data [] a = [] | a : [a]
```

Or equivalently:

```haskell
data List a = Empty | Cons a (List a)
```

Using our algebraic definitions from before, let's try to make one of these in functional C:

```
data list!auto {
	empty()
	cons(auto head, list!auto tail)
}
```

By adopting a C++ style auto keyword, we are also allowing parameterized types. Any framework which can reliably infer the type of a variable, can also do all of the appropriate conversions and casts in the code.

Just so we don't lose track of what we're going for, let's see how this would look in ANSI C code, and let's switch to lower case letters for a more C-style look:

```c
typedef
struct list_ {
	enum {empty_t, cons_t} t; 
	union {
		struct { void *head; struct list_ *next; } cons;
	} data;
}
List;

List *
empty(void) {
	List *l = malloc(sizeof(List));
	if (!l) exit(1);
	l->t = empty_t;
	return l;
}

List *
cons(void *a, List *next) {
	List *l = malloc(sizeof(List));
	if (!l) exit(1);
	l->t = cons_t;
	l->data.cons.head = a;
	l->data.cons.next = next;
	return l;
}
```

So we can see that if we imagine including a "typedef List* list;" statement to our C code, then we are effectively modeling (assuming the dereferencing is automatic) the list type in functional C.

Now let's try to implement some fundamental list operations. We'll start by restating our definition of list in functional C.

```
data list!auto {
	empty()
	cons(auto head, list!auto tail)
}

bool op(asBool)(list a) {
	match(a.empty) => false
	match(a.cons) => true
}

auto op(.)(list a) {
	match(a) => a.head // head and tail are defined by the names of the arguments to the cons constructor
}

auto op(..)(list a) {
	match(a) => a.tail
}

list op([])(auto a)
	cons(a, empty())

list op(++)(list a, list b) {
	match(!a) => b
	match(a) => cons(.a, a.. ++ b)
}

auto head(list a)
	match(a) => .a

list tail(list a)
	match(a) => a..

list init(list a) {
	match(a : !a..) => empty()
	match(a) => [.a] ~ init(a..)
}

auto last(list l) {
	match(a : !a..) => .a
	match(a) => last(a..)
}
```

A few things I've introduced here. For one, we've defined some operator overloaders; the syntax for this will be op(symbol)(params). Binary vs unary operators can be inferred from the parameters given. To be clear, the : symbol indicates "such that." Note that we're using the `.a` and `a..` syntax from above (and defined in the operator overloader functions). If that's confusing (or simply to keep it more C-like), we could use a struct-dereference style call. Also note that we have to inform our compiler that when evaluating a list as a boolean, we return true if in the C-version, `a->t != empty_t`. Realizing this is a valuable thing, I defined an op(asBool) function above. Alternatively we could use something like `match(a.cons)` or `match (a.empty)`, which would tell us which constructor was used to build `a`. This would probably be what we want in a data type with more than two possibilities. Either way, we have some pattern matching -- this may be somewhat primitive compared to what Haskell is doing, but it seems to work. Let's try a possible conversion of the above functions to C code. We'll skip over some of the operator overloaders and renaming the other two -- in a "real" compiled-to-C version, these would probably be given generic (and ugly) names.

```c
typedef List* list;

list singleton(void *a) {
	return cons(a, empty());
}

list concat(list a, list b) {
	if (a->t == empty_t)
		return b;
	return cons(a->data.cons.head, concat(a->data.cons.tail, b));
}

void *head(list l) {
	if (l->t == cons_t)
		return l->data.cons.head;
	printf("Exception: calling head on an empty list\n");
	exit(1);
}

list tail(list l) {
	if (l->t == cons_t)
		return l->data.cons.tail;
	printf("Exception: calling tail on an empty list\n");
	exit(1);
}

list init(list l) {
	if (l->t == cons_t && l->data.cons.tail == NULL)
		return empty();
	if (l->t == cons_t)
		return concat(singleton(l->data.cons.head), init(l->data.cons.tail));
	printf("Exception: calling init on an empty list\n");
	exit(1);
}

void *last(list l) {
	if (l->t == cons_t && l->data.cons.tail == NULL)
		return l->data.cons.head;
	if (l->t == cons_t)
		return last(l->data.cons.tail);
	printf("Exception: calling last on an empty list\n");
	exit(1);
}
```

Note that our simplistic "exceptions" are thrown whenever we fail to satisfy any of the possible matches. Also note that the functional C code is 28 lines, while the ANSI C is 42 lines, and considerably less readable. The difference is quite a bit more pronounced when the definition and constructors of the List data type are also included.