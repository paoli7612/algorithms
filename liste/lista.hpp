#include <iostream>

using namespace std;

struct nodo_t {
    int value;
    nodo_t *next;
};

typedef nodo_t* lista_t;

// ___ AGGIUNGI ___
void lista_aggiungi_coda(lista_t &lista, int value)
{
    if (lista == NULL)
    {
        lista = new nodo_t;
        lista->value = value;
        lista->next = NULL;
    }
    else
        lista_aggiungi_coda(lista->next, value);
}

void lista_aggiungi_testa(lista_t &lista, int value)
{
    lista_t testa = new nodo_t;
    testa->value = value;
    testa->next = lista;
    lista = testa;
}

void lista_aggiungi_prima_di(lista_t &lista, int value, nodo_t* nodo)
{
    if (lista == nodo)
    {
        nodo_t* nuovo = new nodo_t;
        nuovo->value = value;
        nuovo->next = lista->next;
        lista = nuovo;
    }
    else
        lista_aggiungi_prima_di(lista->next, value, nodo);
}

void lista_aggiungi_in_posizione(lista_t &lista, int value, int index)
{

}

// __ TOGLI ___
void lista_togli_nodo(lista_t &lista, nodo_t *nodo){
    if (lista != nodo)
        lista_togli_nodo(lista->next, nodo);
    else
        lista = lista->next;
}

void lista_sort(lista_t lista)
{

}

void lista_stampa(lista_t &lista)
{
    if (lista == NULL)
    {        
        cout << endl;
        return;
    }
        
    cout << lista->value << " ";
    lista_stampa(lista->next);
}