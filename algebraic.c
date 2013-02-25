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

typedef struct BillingInfo_ {
	enum { CreditCard_t, CashOnDelivery_t, Invoice_t } t;
	union {
		struct { int CardNumber; char *CardHolder; char *Address; } CreditCard;
		struct {} CashOnDelivery;
		struct { char *CustomerID; } Invoice;
	} data;
} BillingInfo;

BillingInfo CreditCard(int CardNumber, char *CardHolder, char *Address) {
	BillingInfo bi;
	bi.t = CreditCard_t;
	bi.data.CreditCard.CardNumber = CardNumber;
	bi.data.CreditCard.CardHolder = CardHolder;
	bi.data.CreditCard.Address = Address;
	return bi;
}

BillingInfo CashOnDelivery(void) {
	BillingInfo bi;
	bi.t = CashOnDelivery_t;
	return bi;
}

BillingInfo Invoice(char *CustomerID) {
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
typedef struct Maybe_ {
	enum { Nothing_t, Just_t } t;
	union {
		struct {} Nothing;
		struct { void *a; } Just;
	} data;
} Maybe;

Maybe Nothing(void) {
	Maybe m;
	m.t = Nothing_t;
	return m;
}

Maybe Just(void *a) {
	Maybe m;
	m.t = Just_t;
	m.data.Just.a = a;
	return m;
}