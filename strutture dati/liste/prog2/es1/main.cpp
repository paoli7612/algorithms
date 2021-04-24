#include <iostream>

#include "liste.h"

using namespace std;

int main(int argc, char **argv)
{
    list_t lista = NULL;
    stampa(lista);

    for (int i=0; i<10; i++)
        lista = aggiungi_testa(lista, i);

    stampa(lista);


    for (int i=0; i<10; i++)
        lista = aggiungi_coda(lista, i);

    stampa(lista);

    lista = dealloca_coda(lista);

    stampa(lista);

    lista = dealloca_testa(lista);
    
    stampa(lista);


    return 0;
}