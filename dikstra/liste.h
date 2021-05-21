#include <iostream>
#include <fstream>


struct ListaNodo_t {
    ListaNodo_t *next;
    int vertice;
    float peso;
};

typedef ListaNodo_t *Lista_t;

Lista_t aggiungi(Lista_t lista, int vertice, float peso);
Lista_t aggiungi(Lista_t lista, ListaNodo_t *node);
void stampa_lista(Lista_t lista);