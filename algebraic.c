/* 
An algebraic data type a la Haskell, but in C. 
*/

/*
Example in Haskell (from Real World Haskell chapter 3):

data BillingInfo = CreditCard CardNumber CardHolder Address
                 | CashOnDelivery
                 | Invoice CustomerID

Possible implementation in C:
*/

#include <stdlib.h>

typedef struct BillingInfo BillingInfo; 
struct BillingInfo {
	enum { CreditCard_t, CashOnDelivery_t, Invoice_t } t;
	union {
		struct { int CardNumber; char *CardHolder; char *Address; } CreditCard;
		/*struct {} CashOnDelivery; Empty type here for consistency */
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

/*
A similar idea applied to a Maybe type:

data Maybe a = Nothing
             | Just a

*/
typedef struct Maybe Maybe;
struct Maybe {
	enum { Nothing_t, Just_t } t;
	union {
		/* struct {} Nothing; Empty type here for consistency */
		struct { void *a; } Just;
	} data;
};

Maybe 
Nothing(void) {
	Maybe m;
	m.t = Nothing_t;
	return m;
}

Maybe 
Just(void *a) {
	Maybe m;
	m.t = Just_t;
	m.data.Just.a = a;
	return m;
}

/*
And another for a list type:

data List a = Empty | Cons a (List a)
*/

typedef
struct List_ {
	enum {Empty_t, Cons_t} t; 
	union {
		struct { void *a; struct List_ *next; } Cons;
	} data;
}
List;

List *
Empty(void) {
	List *l = malloc(sizeof(List));
	if (!l) exit(1);
	l->t = Empty_t;
	return l;
}

List *
Cons(void *a, List *next) {
	List *l = malloc(sizeof(List));
	if (!l) exit(1);
	l->t = Cons_t;
	l->data.Cons.a = a;
	l->data.Cons.next = next;
	return l;
}