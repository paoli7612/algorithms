#include <iostream>

#include "lista_doppia.h"

using namespace std;

// g++ main2.cc lista_doppia.cc -o main2.out; ./main2.out

int main(int argc, char **argv)
{
    list_t lista = crea_lista(5);

    stampa_lista(lista);

    return 0;
}