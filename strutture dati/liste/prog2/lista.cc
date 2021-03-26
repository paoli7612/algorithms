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

list_t add_head(list_t list, int value)
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
        list = add_head(list, i);

    return list;
}