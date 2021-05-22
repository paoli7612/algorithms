#include "../include/liste.h"

void liste::stampa(Lista_t lista)
{
    for (; lista!=NULL; lista=lista->next)
        std::cout << lista->inf << " ";
    std::cout << std::endl;
}

void liste::aggiungi_testa(Lista_t &lista, NodoLista_t *nodo)
{
    if (lista == NULL)
        lista = nodo;
    else
    {
        nodo->next = lista;
        lista = nodo;
    }
}

void liste::aggiungi_coda(Lista_t &lista, NodoLista_t *nodo)
{
    
}

void liste::aggiungi_testa(Lista_t &lista, int inf)
{
    liste::aggiungi_testa(lista, new NodoLista_t{inf, NULL});
}

void liste::aggiungi_coda(Lista_t &lista, int inf)
{
    liste::aggiungi_coda(lista, new NodoLista_t{inf, NULL});
}