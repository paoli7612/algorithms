#include "grafi.h"

void init_grafo(Grafo_t &grafo, const int vertici)
{
    grafo.n_vertici = vertici;
    grafo.archi = new List_t[vertici];
}
