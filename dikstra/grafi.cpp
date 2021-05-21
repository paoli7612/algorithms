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

void carica_grafo(Grafo_t &grafo, std::ifstream &file)
{
    int n_vertici;
    file >> n_vertici;
    std::cout << n_vertici << " vertici " << std::endl;

    init_grafo(grafo, n_vertici);

    int a, b;
    float peso;
    
    while (file >> a)
    {
        file >> b >> peso;
        nuovo_arco(grafo, a, b, peso);
    }
}

void albero_di_copertura(const Grafo_t &grafo, Albero_t &albero, int vertice)
{

    albero = new AlberoNodo_t{vertice, 0, NULL, NULL};

    for (ListaNodo_t *ap = grafo.archi[vertice]; ap!=NULL; ap=ap->next)
    {
        aggiungiFiglio(albero, ap->vertice, ap->peso);
    }

}