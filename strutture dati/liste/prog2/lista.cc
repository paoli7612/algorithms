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