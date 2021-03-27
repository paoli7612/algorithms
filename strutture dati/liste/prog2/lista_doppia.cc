#include <iostream>

#include "lista_doppia.h"

using namespace std;


void stampa_lista(list_t lista)
{
    while (lista != NULL)
    {
        cout << lista->value << " ";
        lista = lista->next;
    }
    cout << endl;
}

list_t aggiungi_testa(list_t lista, node_t *nodo)
{
    nodo->next = lista;
    return nodo;
}
list_t aggiungi_testa(list_t lista, int n)
{
    return aggiungi_testa(lista, new node_t {n, NULL});
}

list_t aggiungi_coda(list_t lista, node_t *nodo)
{
    nodo->next = lista;
    return nodo;
}
list_t aggiungi_coda(list_t lista, int n)
{
    return aggiungi_coda(lista, new node_t {n, NULL});
}

list_t crea_lista(int n)
{
    list_t lista = NULL;

    for (int i=0; i<n; i++)
        lista = aggiungi_coda(lista, i);

    return lista;
}