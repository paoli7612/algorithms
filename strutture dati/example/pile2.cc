#include <iostream>

using namespace std;

#include "../pile/pilalente.hpp"

int main(int argc, char** argv)
{
    srand(time(NULL));

    pila_t pila;
    pila_inizializza(pila, 10);

    int n;

    if (argc == 1)
        n = 5;
    else
        n = argv[1][0]-'0';

    for (int i=0; i<n; i++)
    {
        int value = rand()%20 - 10;
        pila_aggiungi(pila, value);
        pila_stampa(pila);
    }

    cout << endl << "Lunghezza: " << pila.el << endl << endl;

    for (int i=0; i<n; i++)
    {
        pila_togli(pila);
        pila_stampa(pila);
    }

    return 0;
}