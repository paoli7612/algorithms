#include <iostream>
#include <fstream>

#include "liste.h"
#include "alberi.h"

struct Grafo_t {
    int n_vertici;
    Lista_t *archi;
};

void init_grafo(Grafo_t &grafo, const int vertici);
void nuovo_arco(Grafo_t &grafo, int a, int b, float peso);
void stampa_grafo(const Grafo_t &grafo);
void carica_grafo(Grafo_t &grafo, std::ifstream &file);

void albero_di_copertura(const Grafo_t &grafo, Albero_t &albero, int vertice);