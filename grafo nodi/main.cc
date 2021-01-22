#include <iostream>
#include <fstream>

#include "grafo.hpp"

using namespace std;

int main(int argc, char** argv)
{

    grafo_t grafo = nuovo();

    for (int i=0; i<5; i++)
    {
        vertice_t vertice = nuovo(i);
        aggiungi(grafo, vertice);
    }
    
    collega_vertici(grafo, 0, 1);
    collega_vertici(grafo, 1, 3);
    collega_vertici(grafo, 3, 4);

    stampa(grafo);

    stampa_percorso(grafo, 0);

    return 0;

}