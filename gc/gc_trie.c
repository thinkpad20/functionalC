#include "gc_trie.h"

/*

This is a garbage collector implemented as a trie. The keys are
the address of the pointers stored, and the values are pointers
to garbage collector references.

*/

Ref *addRef(Ref *r, void *data, TYPE t);

void triegc_init(TrieGC *newTGC, void *topOfStack) {
	Ref r;
	newTGC->size = 0;
	newTGC->topOfStack = topOfStack;
	newTGC->trie = trie_init();
	r.isUsed = 1; /* our "dummy reference" is always considered to be used */
	r.next = r.ptr = NULL;
	newTGC->r = r;
}

void triegc_print(TrieGC const *gc) {
	trie_printElements(gc->trie);
}

void *triegc_allocate(TrieGC *gc, size_t sz, TYPE t) {
	char chars[sizeof(void *)]; /* will store the characters of the pointer */
	int i;
	long p;
	Ref *newR; /* create a reference based on the pointer */
	void *ptr = malloc(sz); /* create the pointer on the heap */
	if (!ptr) { exit(1); } /* make sure the pointer is valid */
	p = (long)ptr;
	for (i=0; i<sizeof(void *); ++i) {
        chars[i] = p & 255;
        p = p >> 8;
    }

	newR = addRef(&gc->r, ptr, t);
	trie_addElement(gc->trie, chars, newR, &i);
	return ptr;
}

Ref *addRef(Ref *r, void *data, TYPE t) {
	while (r->next) { r = r->next; } /* go to the end of our ref list */
	Ref *newR = malloc(sizeof(Ref)); /* allocate a new ref */
	if (!newR) { exit(1); } /* check allocation succeeded */
	newR->ptr = data; /* load up the new reference */
	newR->type = t;
	newR->next = NULL;
	r->next = newR; /* add the new ref to the list */
	return newR;
}

void addChar(char *addr, char c) {
	static int sz = sizeof(void *);
	int i;
	/* move everything back one */
	for (i=0; i<(sz-1); ++i)
		addr[i] = addr[i+1];
	/* stick the new character in as the last one */
	addr[i] = c;
}

void triegc_testFind(TrieGC *gc, char *address) {
	Ref *r = NULL;
	int len = sizeof(void *);
	trie_getElement(gc->trie, address, (void *)&r, &len);
	if (r)
		printf("Found element at address %p\n", r);
	else
		printf("No element found.\n");
}

void triegc_collect(TrieGC *gc) {
	Ref *current = NULL, *previous;
	int inc, i;
	void *bottomOfStack = &current; /* get the top of the stack */
	char *byte = gc->topOfStack, possibleAddress[sizeof(void *)];
	/* scan the heap for used memory addresses */
	/* note that this is just an "proof of concept" initial version, quite innefficient */
	inc = (gc->topOfStack < bottomOfStack) ? 1 : -1;
	/* load up the first (sizeof(void*)) bytes into possibleAddress */
	for (i=0; i<8; ++i) {
		possibleAddress[i] = *byte;
		byte += inc;
	}
	/* continue scanning up the stack */
	while (byte != bottomOfStack) {
		/* add next character to address possibility */
		addChar(possibleAddress, *byte);
		/* check the trie for a match */
		if (trie_getElement(gc->trie, possibleAddress, (void *)&current, &i), current != NULL)
			current->isUsed = 1;
		byte += inc;
	}
	/* scan the reference list for unused memory */
	current = &gc->r;
	while (current->next) {
		previous = current;
		current = current->next;
		if (!current->isUsed) {
			previous->next = current->next; /* skip this entry */
			free(current->ptr); /* free the memory stored in current */
			free(current); /* free current */
			current = previous;
		} else {
			current->isUsed = 0; /* set the reference back to unused */
		}
	}
}