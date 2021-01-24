#include <iostream>
#include <fstream>

#include "grafo.hpp"

using namespace std;

void test1()
{
    grafo_t grafo = nuovo_grafo();

    for (int i=0; i<5; i++)
        aggiungi_vertice(grafo, nuovo_vertice(i));
    
    
    collega_vertici(grafo, 0, 1);
    collega_vertici(grafo, 1, 3);
    collega_vertici(grafo, 3, 4);
    collega_vertici(grafo, 4, 2);


    stampa_grafo(grafo);

    cout << "Primo persorso da 0: ";
    stampa_percorso(grafo, 0);

    salva(grafo);
}

void test2()
{
    grafo_t grafo;

    carica(grafo);
    stampa_grafo(grafo);
}

int main(int argc, char** argv)
{

    test1();

    return 0;

}