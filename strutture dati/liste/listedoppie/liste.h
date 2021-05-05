#include <iostream>

struct node_t {
    int value;
    node_t *back, *next;
};

typedef node_t *list_t;

void add_next(list_t &list, int value);
void add_back(list_t list, int value);

void print_next(list_t list);

list_t next(list_t list);
list_t back(list_t list);
