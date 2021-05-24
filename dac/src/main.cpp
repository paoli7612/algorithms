#include <iostream>

using namespace std;

#include "../include/liste.h"
#include "../include/alberi.h"
#include "../include/grafi.h"

int main(int argc, char **argv)
{

    Lista_t lista = NULL;
    for (int i=0; i<10; i++)
        liste::aggiungi_testa(lista, i);
    

    for (int i=0; i<5; i++)
    {
        liste::rimuovi_nodo(lista->next, lista);
        liste::stampa(lista);
    }





    

    return 0;
}