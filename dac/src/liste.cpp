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
    if (lista == NULL)
        lista = nodo;
    else
    {
        NodoLista_t *ap=lista;
        for (; ap->next!=NULL; ap=ap->next);
        ap->next = nodo;
    }
}

void liste::aggiungi_testa(Lista_t &lista, int inf)
{
    liste::aggiungi_testa(lista, new NodoLista_t{inf, NULL});
}

void liste::aggiungi_coda(Lista_t &lista, int inf)
{
    liste::aggiungi_coda(lista, new NodoLista_t{inf, NULL});
}

void liste::rimuovi_nodo(Lista_t &lista, NodoLista_t *nodo)
{
    if (lista == nodo)
    {
        lista = lista->next; 
        delete nodo;
    }
    else
    {
        std::cout << nodo->inf << " as" << std::endl;
        NodoLista_t *ap = lista;
        for (; ap->next!=nodo; ap=ap->next) std::cout << ap->inf << std::endl;
        std::cout << nodo->inf << std::endl;
        NodoLista_t *de = ap->next;
        ap->next = de->next;
        delete de;
    }
}
