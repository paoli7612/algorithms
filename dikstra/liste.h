#include <iostream>

struct Node_t {
    Node_t *next;
    int vertice;
    float peso;
};

typedef Node_t *List_t;

List_t aggiungi(List_t list, int vertice, float peso);
List_t aggiungi(List_t list, Node_t *node);