#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *next;
};

typedef node_t* lista_t;

void lista_aggiungi_coda(lista_t &lista, int value)
{
    if (lista == NULL)
    {
        lista = new node_t;
        lista->value = value;
        lista->next = NULL;
    }
    else
        lista_aggiungi(lista->next, value);
}

void lista_aggiungi_testa(lista_t &lista, int value)
{
    lista_t testa = new node_t;
    testa->value = value;
    testa->next = lista;
    lista = testa;
}


void lista_stampa(lista_t lista)
{
    if (lista == NULL)
    {        
        cout << endl;
        return;
    }
        
    cout << lista->value << " ";
    lista_stampa(lista->next);
}
