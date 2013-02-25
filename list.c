#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "list.h"
#include "gc.h"

list *
newitem(void *v) {
  list *o = gc_malloc(sizeof(list), LIST);
  o->val = v;
  o->next = NULL;
  return o;
}

list *
copyitem(list *i) {
  list *o = malloc(sizeof(list));
  if (o == NULL) {
    exit(1);
  }
  o->val = i->val;
  o->next = NULL;
  return o;
}

list *
append(list *l, void *v) {
  list *ni = newitem(v);
  if (l == NULL) {
    return ni;
  }
  list *curr;
  for (curr = l; curr->next != NULL; curr = curr->next)
    ;
  curr->next = ni;
  return l;
}

list *
concat(list *h, list *t) {
  list *curr;
  for (curr = h; curr->next != NULL; curr = curr->next)
	  ;
  curr->next = t;
	return h;	
}

/* shallow copy */
list *
copy(list *l) {
  list *o = NULL;
  list *curr;
  for (curr = l; curr != NULL; curr = curr->next) {
    o = append(o, curr->val);
  }
  return o; 
}

/* objs flag set to true will also free the objects in the list */
void
list_free(void *_l) {
  list *l = _l;
  free(l); 
}


