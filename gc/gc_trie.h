#ifndef __GC_TRIE_H__
#define __GC_TRIE_H__

#include "trie.h"

/* For now, this is (mostly) distinct from the gc.h files. Later I 
might intergrate them better. */

/* STRUCTURES (defined here to avoid a global variable) */

#define TYPE_COUNT 4

typedef enum TYPE {
  LIST,
  ENVOBJ,  
  CLOSURE,
  STANDARD   
} TYPE;

typedef struct Ref_ {
   void *ptr; /* pointer to the obj */
   TYPE type; /* obj type */
	int isUsed; /* tells whether the object is pointed to */
   struct Ref_ *next; /* refs are stored as a list; */
} Ref;

typedef struct TrieGC {
   int size;
   void *topOfStack;
	Trie *trie;
	Ref r;
	void (*destructor_table[TYPE_COUNT])(void *);
} TrieGC;

void triegc_init(TrieGC *gc, void *tos); /* Initializes a garbage collector */
void triegc_print(TrieGC const *gc); /* prints a Trie (somewhat inelegantly) */
void *triegc_allocate(TrieGC *gc, size_t sz, TYPE t);
void triegc_testFind(TrieGC *gc, char *address);
void triegc_collect(TrieGC *gc);

#endif /* __GC_TRIE_H__ */