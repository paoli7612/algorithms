#ifndef MODULO_LISTE
#define MODULO_LISTE

#include <iostream>
#include <fstream>

struct NodoLista_t {
    int inf;
    NodoLista_t *next;
};

typedef NodoLista_t *Lista_t;

namespace liste
{
    void stampa(Lista_t lista);

    void aggiungi_testa(Lista_t &lista, NodoLista_t *nodo);
    void aggiungi_coda(Lista_t &lista, NodoLista_t *nodo);

    void aggiungi_testa(Lista_t &lista, int inf);
    void aggiungi_coda(Lista_t &lista, int inf);
    
} // namespace liste

#endif // MODULO_LISTE