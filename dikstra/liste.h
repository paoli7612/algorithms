#include <iostream>

struct Nodo_t {
    Nodo_t *next;
    int vertice;
    float peso;
};

typedef Nodo_t *Lista_t;

Lista_t aggiungi(Lista_t lista, int vertice, float peso);
Lista_t aggiungi(Lista_t lista, Nodo_t *node);
void stampa_lista(Lista_t lista);