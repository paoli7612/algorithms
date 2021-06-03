#include <iostream>

#include "grafi.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Graph_t grafo;

    newGraph(grafo, 10);

    connect(grafo, 0, 2, {'A'});
    connect(grafo, 1, 2, {'A'});

    printGraph(grafo);

    return 0;
}
