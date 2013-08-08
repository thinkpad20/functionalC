#include "trie.h"

Trie *trie_init() {
	int i;
	Trie *newTrie = (Trie *) malloc(sizeof(Trie));
	if (newTrie != NULL) {
		for (i=0; i<256; ++i) { newTrie->subTries[i] = NULL; }
		newTrie->key = '\0';
		return newTrie;
	} else { exit(1); }
}

Trie *trie_initWithKey(char key) {
	Trie *newTrie = trie_init();
	newTrie->key = key;
	return newTrie;
}

void trie_printElements(Trie const *trie) {
	int i;
	for (i=0; i< MAX_DICT; ++i) {
		if (trie->subTries[i]) {
			printf("%c", i);
			trie_printElements(trie->subTries[i]);
		}
	}
	if (trie->data) printf(":%d\n", *(int*)trie->data);
}

void trie_addElementR(Trie *trie, const char *keys, void *data, int start, int end) {
	if (start == end) {
		trie->data = data;
		printf("added element to trie with data %p\n", data);
		return;
	}

	if (trie->subTries[(int)keys[start]] == NULL)
		trie->subTries[(int)keys[start]] = trie_initWithKey((int)keys[start]);
	
	trie_addElementR(trie->subTries[(int)keys[start]], keys, data, start+1, end);
}

void trie_addElement(Trie *trie, const char *keys, void *data, int *len) {
	int length = (len)? *len : strlen(keys);
	return trie_addElementR(trie, keys, data, 0, length);
}

void trie_getElementR(Trie *trie, const char *keys, void **dest, int start, int end) {
	if (start == end) {
		*dest = trie->data;
		return;
	}
	if (trie->subTries[(int)keys[start]] != NULL) {
		return trie_getElementR(trie->subTries[(int)keys[start]], keys, dest, start+1, end);
	}
	else {
		*dest = NULL;
	}
}

void trie_getElement(Trie *trie, const char *keys, void **dest, int *len) {
	int length = (len)? *len : strlen(keys);
	return trie_getElementR(trie, keys, dest, 0, length);
}