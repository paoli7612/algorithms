#include <iostream>

struct Node_t {
    Node_t *next;
    int vertice;
    float peso;
};

typedef Node_t *List_t;

struct Grafo_t {
    int n_vertici;
    List_t *archi;
};

void init_grafo(Grafo_t &grafo, const int vertici);
void nuovo_arco(Grafo_t &grafo, int a, int b, float peso);
void stampa_grafo(const Grafo_t &grafo);