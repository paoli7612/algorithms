#include <iostream>

using namespace std;

struct nodo_t {
    int value;
    nodo_t *next;
};

typedef nodo_t* lista_t;

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
        lista_aggiungi_dopo(lista->next, value, nodo);
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

void lista_togli(lista_t &lista, nodo_t *nodo){
    if (lista != nodo)
        lista_togli(lista->next, nodo);
    else
        lista = lista->next;
}

void lista_sort(lista_t lista)
{


}
