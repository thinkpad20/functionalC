#ifndef DBLLIST_H
#define DBLLIST_H
#include <stdbool.h>

/* our list type that we'll use throughout 
along with the helper functions: newitem and append
this is boring, go down to main */
typedef struct node_ {
  void *val;
  struct node_ *next;
  struct node_ *previous;
  struct node_ *last;
} node;

typedef struct dbllist {
	node *head;
	node *last;
} dbllist;

node *newitem(void *v);
dbllist newdbllist(void *v);
node *copyitem(node *i); 
dbllist append(dbllist l, void *v); 
dbllist concat(dbllist h, dbllist t); 
dbllist copy(dbllist h); 
void dbllist_free(void *); 
void *head(dbllist l);
dbllist tail(dbllist l);
void *last(dbllist l);
dbllist init(dbllist l);

#endif

