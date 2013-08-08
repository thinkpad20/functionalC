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
	int i;
	printf("&i = %p", &i);
	return 0;
}