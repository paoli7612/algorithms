#include <iostream>

#include "grafi.h"

using namespace std;

int main(int argc, char **argv)
{

    Grafo_t grafo;
    init_grafo(grafo, 5);

    stampa_grafo(grafo);
    

    return 0;
}