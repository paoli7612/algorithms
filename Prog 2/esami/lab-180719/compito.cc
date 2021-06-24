#include <iostream>
#include <fstream>
#include <cstring>

#include "graph.h"

using namespace std;

int main(int argc, char **argv)
{
    graph_t graph;
    cout << "carico grafo" << endl;
    graph_load(graph);
    cout << "stampo grafo" << endl;
    graph_print(graph);

    return 0;
}