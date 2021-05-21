#include <iostream>

#include "grafi.h"

using namespace std;

int main(int argc, char **argv)
{

    Grafo_t grafo;
    
    ifstream file("input1.txt");
    carica_grafo(grafo, file);

    stampa_grafo(grafo);


    return 0;
}