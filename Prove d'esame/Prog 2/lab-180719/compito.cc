#include <iostream>
#include <fstream>
#include <cstring>

#include "grafi.h"

using namespace std;

void leggi_riga(istream& is, char buffer[], int buffer_size)
{
    while (is.peek() == '\n')
    {
        is.get();
    }

    is.get(buffer, buffer_size);
    is.get();
}

void stampa_riga(char *riga, int max=81)
{
    for (int i=0; i<max && riga[i]!='\0'; i++)
        cout << (char)riga[i];
}

// inizializza e carica il grafo dai file `graph` e `node`
void carica(graph &grafo)
{
    ifstream f_graph("graph");
    ifstream f_node("node");
    
    int totale_nodi;
    f_graph >> totale_nodi;

    new_graph(totale_nodi);


    int i = 0;
    while(! f_node.eof())
    {
        Node &node = grafo.vertices[i++];
        leggi_riga(f_node, node.cont, 81);
        f_node >> node.tipo;
    }
}

// stampa i nodi e gli archi del grafo
void stampa(graph &grafo)
{
    print_graph(grafo);
}

int main(int argc, char **argv)
{
    cout << "asd";

    graph grafo;
    cout << "asd";

    carica(grafo);

    stampa(grafo);


    return 0;
}