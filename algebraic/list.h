#ifndef LIST_H
#define LIST_H
#include <stdbool.h>

/* our list type that we'll use throughout 
along with the helper functions: newitem and append
this is boring, go down to main */
typedef struct list_ {
  void *val;
  struct list_ *next;
} list;

list *newitem(void *v); 
list *copyitem(list *i); 
list *append(list *l, void *v); 
list *concat(list *h, list *t); 
list *copy(list *h); 
void list_free(void *); 
#define head(list) ((list)->val) /* no point in doing these as functions */
#define tail(list) ((list)->next)
void *last(list *l);
list *init(list *l);


#endif

