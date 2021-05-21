#include <iostream>

#include "grafi.h"

using namespace std;

int main(int argc, char **argv)
{

    Grafo_t grafo;
    init_grafo(grafo, 5);

    nuovo_arco(grafo, 1, 3, 5.4f);
    nuovo_arco(grafo, 1, 5, 12.0f);

    stampa_grafo(grafo);


    return 0;
}