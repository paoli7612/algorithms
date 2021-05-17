#include <iostream>

#ifndef INCLUDE_LIST_H_
#define INCLUDE_LIST_H_

#include "../type.h"

struct ListNode_t {
    type_t value;    
    ListNode_t *next;
};

typedef ListNode_t *List_t;

ListNode_t *last(List_t list);

List_t add_head(List_t list, ListNode_t *node);
List_t add_head(List_t list, type_t value);

List_t add_tail(List_t list, ListNode_t *node);
List_t add_tail(List_t list, type_t value);

List_t random_list_new(const int len);
void random_list_edit(List_t list);

void print(List_t list);

void concat(List_t a, List_t b);

#endif /* INCLUDE_LIST_H_ */