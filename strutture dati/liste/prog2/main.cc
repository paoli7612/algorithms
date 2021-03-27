#include <iostream>

#include "lista.h"

using namespace std;

// g++ main.cc lista.cc -o main.out; ./main.out

int main(int argc, char **argv)
{
    list_t l = crea_lista_casuale(10);
    list_t m = crea_lista_casuale(10);
    stampa_lista(l);
    stampa_lista(m);

    list_t u = differenza(l, m);
    stampa_lista(u);

    return 0;
}