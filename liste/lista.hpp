#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *next;
};

typedef node_t* lista_t;

void lista_aggiungi(lista_t &lista, int value)
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