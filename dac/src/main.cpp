#include <iostream>

using namespace std;

#include "../include/liste.h"
#include "../include/alberi.h"
#include "../include/grafi.h"

int main(int argc, char **argv)
{

    Lista_t lista = NULL;
    liste::aggiungi_coda(lista, 0);
    liste::aggiungi_coda(lista, 1);
    liste::aggiungi_coda(lista, 2);
    liste::aggiungi_testa(lista, 3);
    liste::aggiungi_testa(lista, 4);
    liste::aggiungi_testa(lista, 5);
    
    
    liste::stampa(lista);


    liste::aggiungi_coda(lista, 0);
    liste::aggiungi_coda(lista, 1);
    liste::aggiungi_coda(lista, 2);
    liste::aggiungi_testa(lista, 3);
    liste::aggiungi_testa(lista, 4);
    liste::aggiungi_testa(lista, 5);
    
    
    liste::stampa(lista);


    

    return 0;
}