#include <iostream>

// peso (ogni cella della matrice)
struct Weight_t {
    int v;
};

// matrice di adiacenza
struct Graph_t {
    Weight_t **mat;
    int n_vertix;
};

void newGraph(Graph_t &graph, const int n_vertix);
void printGraph(const Graph_t &graph);
void connect(Graph_t &graph, const int a, const int b, const Weight_t weight);

void load(Graph_t &graph, std::ifstream is);
