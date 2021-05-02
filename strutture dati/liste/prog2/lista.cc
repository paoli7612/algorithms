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

list_t aggiungi_testa(list_t lista, node_t* nodo)
{
    nodo->next = lista;
    return nodo;
}
list_t aggiungi_testa(list_t lista, int valore)
{    
    return aggiungi_testa(lista, new node_t{valore, NULL});
}   

list_t aggiungi_coda(list_t lista, node_t *nodo)
{
    if (lista == NULL)
        return nodo;

    node_t *app = lista;
    while (app->next != NULL)
        app = app->next;

    app->next = nodo;
    return lista;
}

list_t aggiungi_coda(list_t lista, int valore)
{   
    return aggiungi_coda(lista, new node_t{valore, NULL});
}

list_t crea_lista(int n)
{
    list_t list = NULL;

    for (int i=0; i<n; i++)
        list = aggiungi_testa(list, i);

    return list;
}

list_t crea_lista_casuale(int n)
{
    list_t list = NULL;

    for (int i=0; i<n; i++)
        list = aggiungi_testa(list, rand()%10);

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

list_t cancella_testa(list_t lista)
{
    node_t *secondo = lista->next;
    delete lista;
    return secondo;
}

list_t cancella_coda(list_t lista)
{
    if (lista == NULL) // nothing to do
        return NULL;

    node_t *app = lista;

    if (lista->next == NULL)
    {
        app = app->next;
        delete lista;
        return app;
    }

    while (app->next->next != NULL)
        app = app->next;

    delete app->next;
    app->next = NULL;

    return lista;
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

list_t unione(list_t l, list_t m)
{
    // lista con tutti gli elementi presenti in l o in m

    list_t u = NULL;

    while (l != NULL)
    {
        u = aggiungi_coda(u, l->value);
        l = l->next;
    }
    while (m != NULL)
    {
        u = aggiungi_coda(u, m->value);
        m = m->next;
    }

    return u;
}

list_t intersezione(list_t l, list_t m)
{
    // lista con tutti gli elementi presenti in l e in m
    list_t u = NULL;

    while (l != NULL)
    {
        if (cerca_valore(m, l->value) != NULL) // il valore cè anche nel altra lista
            u = aggiungi_coda(u, l->value);
        l = l->next;
    }

    return u;
}

list_t differenza(list_t l, list_t m)
{
    // lista con tutti gli elementi di l non presenti in m
    list_t u = NULL;

    while (l != NULL)
    {
        if (cerca_valore(m, l->value) == NULL) // il valore cè anche nel altra lista
            u = aggiungi_coda(u, l->value);
        l = l->next;
    }

    return u;
}