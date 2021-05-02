#include <iostream>

using namespace std;

#include "liste.h"

void stampa_lista(list_t lista)
{
    if (lista == NULL)
    {
        cout << endl << endl;
        return;
    }
    
    cout << lista->value << " ";
    stampa_lista(lista->next);
    
}

list_t aggiungi_testa(list_t lista, node_t *nodo)
{
    nodo->next = lista;
    return lista;
}

list_t crea_lista(int len)
{    
    if (len == 0)
        return NULL;

    node_t *node = new node_t;
    node->next = crea_lista(len-1);
    node->value = 0;

    return node;
}

list_t crea_lista_casuale(int len)
{
    if (len == 0)
        return NULL;

    node_t *node = new node_t;
    node->next = crea_lista_casuale(len-1);
    node->value = rand()%10;

    return node;
}

void cancella_nodo(list_t &lista, node_t *nodo)
{
    if (lista == NULL)
        return; // nodo non trovato
    
    if (lista == nodo)
    {
        node_t *appoggio = lista->next;
        delete lista;
        lista = appoggio;
    }
    else
        cancella_nodo(lista->next, nodo);
}

node_t *cerca(list_t lista, int value)
{
    if (lista == NULL)
        return NULL;

    if (lista->value == value)
        return lista;
    
    return cerca(lista->next, value);
}

int conta(list_t lista, int value)
{
    if (lista == NULL)
        return 0;

    if (lista->value == value)
        return 1 + conta(lista->next, value);
    
    return conta(lista->next, value);
}

int lunghezza(list_t lista)
{ 
    if (lista == NULL)
        return 0;

    return 1+lunghezza(lista->next);
}