
#include <iostream>

struct node_t {
    int value;
    node_t *next;
};

typedef node_t *list_t;

void stampa(list_t list);

list_t aggiungi_testa(list_t list, node_t *node);
list_t aggiungi_testa(list_t list, int value);

list_t aggiungi_coda(list_t list, node_t *node);
list_t aggiungi_coda(list_t list, int value);

list_t dealloca_testa(list_t list);
list_t dealloca_coda(list_t list);