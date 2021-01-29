// g++ main.cc -o main.out -Wall --pedantic; ./main.out
#include <iostream>

using namespace std;

#include "pilalente.hpp"

int main(int argc, char** argv)
{
    pila_t pila;
    pila_inizializza(pila, 7);
    for (int i=0; i<10; i++)
    {
        pila_aggiungi(pila, rand()%10);
        pila_stampa(pila);
    }

    for (int i=0; i<10; i++)
    {
        pila_togli(pila);
        pila_stampa(pila);
    }
    return 0;
}