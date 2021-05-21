#include "grafi.h"

void init_grafo(Grafo_t &grafo, const int vertici)
{
    grafo.n_vertici = vertici;
    grafo.archi = new Lista_t[vertici];
    for (int i=0; i<grafo.n_vertici; i++)
        grafo.archi[i] = NULL;
}

void nuovo_arco(Grafo_t &grafo, int a, int b, float peso)
{
    grafo.archi[a] = aggiungi(grafo.archi[a], b, peso);

}

void stampa_grafo(const Grafo_t &grafo)
{
    std::cout << grafo.n_vertici << std::endl;
    for (int i=0; i<grafo.n_vertici; i++)
    {
        std::cout << i << ")\t";
        stampa_lista(grafo.archi[i]);
        std::cout << std::endl;
    }
}