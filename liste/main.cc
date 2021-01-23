// g++ main.cc -o main.out -Wall --pedantic; ./main.out
#include <iostream>

#include "lista.hpp"

using namespace std;

int main(int argc, char** argv)
{
    lista_t lista = NULL;

    lista_aggiungi(lista, 5);
    lista_aggiungi(lista, -2);

    for (int i=0; i<10; i++)
        lista_aggiungi(lista, 4*i);

    lista_aggiungi(lista, 5);
    lista_aggiungi(lista, 7);
    
    lista_stampa(lista);
}