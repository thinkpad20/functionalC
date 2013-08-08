#include <stdio.h>
#include <stdlib.h>
#include "gc_trie.h"

void pointerToChars(char *chars, void *ptr) {
	int i, ptrInt;
	ptrInt = (long)ptr; /* convert the pointer to an int */
	for (i=0; i<sizeof(void *); ++i) /* pull individual characters from the pointer address */
		chars[i] = (char)(ptrInt & (3<<2*i))>>(2*i);
}

int main() {
	int *i, *j, *k;
	TrieGC gc;
	char pntrChars[sizeof(void *)];
	triegc_init(&gc, &i); /* set the gc's top of stack = to i's address */
	i = triegc_allocate(&gc, sizeof(int), STANDARD);
	j = triegc_allocate(&gc, sizeof(int), STANDARD);
	k = triegc_allocate(&gc, sizeof(int), STANDARD);
	printf("i = %p\nj = %p\n k=%p\n", i, j, k);
	printf("&i = %p\n&j = %p\n &k=%p\n", &i, &j, &k);
	pointerToChars(pntrChars, i);
	triegc_testFind(&gc, pntrChars);
	pointerToChars(pntrChars, j);
	triegc_testFind(&gc, pntrChars);
	pointerToChars(pntrChars, k);
	triegc_testFind(&gc, pntrChars);
	return 0;
}