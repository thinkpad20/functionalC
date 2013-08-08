#ifndef __TRIE_H__
#define __TRIE_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DICT 256

typedef struct Trie_ {
	char key;
	void *data;
	struct Trie_ *subTries[MAX_DICT]; 
} Trie;

Trie *trie_init();
Trie *trie_initWithKey(char);
void trie_printElements(Trie const *trie);
void trie_addElement(Trie *trie, const char *keys, void *data, int *len);
void trie_getElement(Trie *trie, const char *keys, void **dest, int *len);

#endif