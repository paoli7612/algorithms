#include <iostream>

#include "lista.h"

using namespace std;

// g++ main.cc lista.cc -o main.out; ./main.out

int main(int argc, char **argv)
{
    list_t l = crea_lista(7);

    stampa_lista(l);

    l = aggiungi_testa(l, 11);
    stampa_lista(l);
    l = aggiungi_coda(l, 11);
    stampa_lista(l);
    return 0;
}