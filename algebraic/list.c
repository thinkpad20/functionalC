#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "list.h"
#include "gc.h"

list *
newitem(void *v) {
  list *o = malloc(sizeof(list));
  if (o == NULL) {
    exit(1);
  }
  o->val = v;
  o->next = NULL;
  gc_register((void *)o, LIST);
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

/*shallow copy*/
list *
copy(list *l) {
  list *o = NULL;
  list *curr;
  for (curr = l; curr != NULL; curr = curr->next) {
    o = append(o, curr->val);
  }
  return o; 
}

/*objs flag set to true will also free the objects in the list*/
void
list_free(void *_l) {
  list *l = _l;
  free(l); 
}

/* Haskell-style operations */

void *
last(list *l) {
  list *cursor;
  for(cursor=l; cursor->next != NULL; cursor = cursor->next)
    ;
  return cursor->val;
}

/* Not sure what's best to do with the leftover node, so freeing it for now. */
list *
init(list *l) {
  list *cursor;
  for(cursor=l; cursor->next->next != NULL; cursor = cursor->next)
    ;
  free(cursor->next);
  cursor->next = NULL;
  return l;
}