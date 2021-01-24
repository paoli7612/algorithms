// g++ main.cc -o main.out -Wall --pedantic; ./main.out
#include <iostream>

using namespace std;

#include "pila.hpp"

int main(int argc, char** argv)
{
    pila_t pila = NULL;
    pila_aggiungi(pila, 1);
    pila_aggiungi(pila, 2);
    pila_aggiungi(pila, 3);
    pila_stampa(pila);
    pila_togli(pila);
    pila_stampa(pila);
    return 0;
}