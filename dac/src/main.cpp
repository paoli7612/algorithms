#include <iostream>

using namespace std;

#include "../include/liste.h"
#include "../include/alberi.h"
#include "../include/grafi.h"

using namespace alberi;

int main(int argc, char **argv)
{
    Albero_t albero = nuovo_nodo(1);
    
    aggiungi_figlio(albero, 2);
    aggiungi_fratello(albero->primoFiglio, 3);
    stampa_preorder(albero);

    return 0;
}