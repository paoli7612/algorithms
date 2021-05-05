#include <iostream>

struct node_t {
    int value;
    node_t *back, *next;
};

typedef node_t *list_t;

void next(list_t &list);
void back(list_t &back);

void add_next(list_t &list, int value);
void add_back(list_t &list, int value);

void print_next(list_t list);
void print_back(list_t list);

list_t last(list_t list);
list_t first(list_t list);
