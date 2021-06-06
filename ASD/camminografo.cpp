/*Si consideri il seguente problema:
INPUT: un grafo DIRETTO G = (V, E) di n ≥ 3 nodi (con identificativi gli interi compresi tra 1 e n), tre nodi del
grafo u, v, w ∈ V .
OUTPUT (10 punti): la lunghezza del cammino pi`u breve che va dal nodo u al nodo v e che NON passa per w.
OUTPUT (12 punti): stampa dei nodi sul cammino pi`u breve che va dal nodo u al nodo v e che NON passa per w
(nell’odine giusto), oppure stampa ”non esiste cammino” nel caso in cui tale cammino non esista.
Usare la rappresentazione ad alto livello del grafo.
Spiegare brevemente a parole il funzionamento dell’algoritmo e fornire lo presudo-codice.
Studiare il costo computazionale dell’algoritmo proposto.*/

#include <iostream>

using namespace std;

struct nodeList_t {
    int vertex;
    nodeList_t *next;
};

typedef nodeList_t *adjList_t;

void add(adjList_t &list, nodeList_t *node)
{
    if (list == NULL)
        list = node;
    else
    {
        nodeList_t *ap=list;
        for (; ap->next!=NULL; ap=ap->next);
        ap->next = node;
    }
}

struct graph_t {
    int v; // n vertex
    adjList_t *adj;
};

graph_t new_graph (const int n) {
    graph_t g;
    g.v = n;
    g.adj = new adjList_t[n];
    for (int i=0; i<n; i++)
        g.adj[i] = NULL;
}

void connect(graph_t &graph, int a, int b)
{
    add(graph.adj[a], new nodeList_t{b, NULL});
}

void DFS(graph_t graph)
{
    bool *done = new bool[graph.v];
    for (int i=0; i<graph.v; i++)
        done[i] = false;
    
    
}

int main(int argc, char **argv)
{
    graph_t g = new_graph(5);
    connect(g, 1, 2);
    connect(g, 1, 3);
    connect(g, 3, 4);
    connect(g, 4, 2);
    connect(g, 0, 1);

    DFS(g);


    return 0;
}