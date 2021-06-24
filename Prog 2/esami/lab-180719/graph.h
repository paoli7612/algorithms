#include <iostream>
#include <fstream>

#include "node.h"

struct adj_node_t {
    int node;
    adj_node_t *next;
};
// lista di adiacenza
typedef adj_node_t *adj_list_t;
void adj_add(adj_list_t &list, adj_node_t *node);
void adj_print(adj_list_t &list);

// grafo
struct graph_t {
    int n;                  // numero vertici
    node_t *nodes;          // vertici
    adj_list_t *adj_lists;  // liste di adiacenza
};

// inizializza il grafo con n vertici ( liste vuote )
void graph_init(graph_t &graph, const int n);

// aggiungi arco al grafo
void graph_add_edge(graph_t &graph, const int a, const int b);

// stampa i nodi e gli archi del grafo
void graph_print(const graph_t &graph);

// carica il grafo dai gile `graph` e `node`
void graph_load(graph_t &graph);