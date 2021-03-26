#include <iostream>
 
#include "lista.h"

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

list_t aggiungi_testa(list_t list, int value)
{    
    node_t *node = new node_t;
    node->value = value;
    node->next = list;

    return node;
}

list_t crea_lista(int n)
{
    list_t list = NULL;

    for (int i=0; i<n; i++)
        list = aggiungi_testa(list, i);

    return list;
}

list_t cancella_nodo(list_t lista, node_t *nodo)
{
    if (lista == nodo)
    {
        lista = lista->next;
        delete nodo;
    }
    else 
    {
        node_t *app = lista;
        while (app->next != nodo)
            app = app->next;
        
        app->next = nodo->next;
    }

    return lista;
}

void cancella_lista(list_t lista)
{
    while (lista != NULL)
        lista = cancella_nodo(lista, lista);
}

node_t *cerca_valore(list_t lista, int valore)
{
    while (lista != NULL && lista->value != valore)
        lista = lista->next;
    
    return lista;
}

int contaa(list_t lista, int valore)
{
    int n = 0;

    while (lista != NULL)
    {
        n += (lista->value == valore);
        lista = lista->next;
    }

    return n;
}

int conta(list_t lista, int valore)
{
    int n=-1; 

    while (lista != NULL)
    {
        lista = cerca_valore(lista->next, valore);
        n++;
    }

    return n;

}

list_t cancella_valorii(list_t lista, int valore)
{
    node_t *app = lista;
    while (app != NULL)
    {
        if (app->value == valore)
            lista = cancella_nodo(lista, app);
        app = app->next;
    }
    
    return lista;
}

list_t cancella_valori(list_t lista, int valore)
{
    node_t *app = lista;

    while ((app = cerca_valore(app->next, valore)) != NULL)
        lista = cancella_nodo(lista, app);
    
    return lista;
}