#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "dbllist.h"
#include "gc.h"

node *
newitem(void *v) {
  node *o = gc_malloc(sizeof(node), LIST);
  o->val = v;
  o->next = NULL;
  o->previous = NULL;
  return o;
}

dbllist
newdbllist(void *v) {
  dbllist l;
  l.head = l.last = newitem(v);
  return l;
}

node *
copyitem(node *i) {
  node *o = malloc(sizeof(node));
  if (o == NULL) {
    exit(1);
  }
  o->val = i->val;
  o->next = NULL;
  return o;
}

dbllist
append(dbllist l, void *v) {
  node *ni = newitem(v);
  dbllist nl = l;
  nl.last->next = ni;
  ni->previous = nl.last;
  nl.last = ni;
  return nl;
}

dbllist
concat(dbllist h, dbllist t) {
  dbllist nl;
  nl.head = h.head;
  h.last->next = t.head;
  t.head->previous = h.head;
  nl.last = t.last;
	return nl;	
}

/* shallow copy */
dbllist
copy(dbllist l) {
  dbllist nl;
  node *curr;
  for (curr = l.head; curr != NULL; curr = curr->next) {
    nl = append(nl, curr->val);
  }
  return nl; 
}

/* objs flag set to true will also free the objects in the list */
void
node_free(void *_n) {
  node *n = _n;
  free(n); 
}

/* Haskell-style head, tail, init, last */
void *
head(dbllist l) {
  return l.head->val;
}

dbllist
tail(dbllist l) {
  l.head = l.head->next;
  return l;
}

void *
last(dbllist l) {
  return l.last->val;
}

dbllist
init(dbllist l) {
  l.last = l.last->previous;
  return l;
}