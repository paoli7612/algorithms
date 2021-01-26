// g++ main.cc -o main.out -Wall --pedantic; ./main.out
#include <iostream>

using namespace std;

#include "pilalente.hpp"

int main(int argc, char** argv)
{
    pila_t pila;
    pila_inizializza(pila, 10);
    pila_aggiungi(pila, 1);
    pila_aggiungi(pila, 2);
    pila_aggiungi(pila, 3);
    pila_aggiungi(pila, 7);
    pila_aggiungi(pila, 2);
    pila_stampa(pila);
    return 0;
}