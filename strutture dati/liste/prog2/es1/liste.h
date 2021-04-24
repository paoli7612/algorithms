
#include <iostream>

struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

void stampa(list_t list);