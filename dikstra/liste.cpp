#include "liste.h"

Lista_t aggiungi(Lista_t lista, Nodo_t *node)
{
    if (lista == NULL)
        return node;
    
    Nodo_t *ap = lista;
    for (; ap->next!=NULL; ap=ap->next);
    ap->next = node;

    return lista;
}

Lista_t aggiungi(Lista_t lista, int vertice, float peso)
{
    return aggiungi(lista, new Nodo_t {NULL,vertice,peso});
}

void stampa_lista(Lista_t lista)
{
    for (; lista!=NULL; lista=lista->next)
        std::cout << lista->vertice << "[" << lista->peso << "] ";
}

