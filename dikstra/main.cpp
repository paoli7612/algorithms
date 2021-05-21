#include <iostream>

#include "grafi.h"

using namespace std;

int main(int argc, char **argv)
{

    if (argc != 2)
    {
        cerr << "passare come argomento il nome del file di input" << endl;
        return 1;
    }

    Grafo_t grafo;
    
    ifstream file(argv[1]);
    carica_grafo(grafo, file);

    stampa_grafo(grafo);


    return 0;
}