#include <iostream>

using namespace std;

#include "../include/liste.h"
#include "../include/alberi.h"
#include "../include/grafi.h"

int main(int argc, char **argv)
{

    Lista_t lista = NULL;
    liste::aggiungi_testa(lista, 4);
    liste::aggiungi_testa(lista, 4);
    liste::aggiungi_testa(lista, 4);
    liste::aggiungi_testa(lista, 4);
    liste::stampa(lista);


    

    return 0;
}