#include "liste.h"

Lista_t aggiungi(Lista_t lista, ListaNodo_t *node)
{
    if (lista == NULL)
        return node;
    
    ListaNodo_t *ap = lista;
    for (; ap->next!=NULL; ap=ap->next);
    ap->next = node;

    return lista;
}

Lista_t aggiungi(Lista_t lista, int vertice, float peso)
{
    return aggiungi(lista, new ListaNodo_t {NULL,vertice,peso});
}

void stampa_lista(Lista_t lista)
{
    for (; lista!=NULL; lista=lista->next)
        std::cout << lista->vertice << "[" << lista->peso << "] ";
}

