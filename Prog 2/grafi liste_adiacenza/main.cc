#include <iostream>

using namespace std;

struct nodo_t {
    int vertice;
    nodo_t *next;
};
typedef nodo_t *coda_t;

struct grafo_t {
    int n_vertici;
    coda_t *adiacenti;
    bool *visitati;
};

void grafo_init(grafo_t &grafo, const int n_vertici)
{
    grafo.n_vertici = n_vertici;
    grafo.adiacenti = new coda_t[n_vertici];
    grafo.visitati = new bool[n_vertici];

    for (int i=0; i<n_vertici; i++)
    {
        grafo.visitati[i] = false;
        grafo.adiacenti[i] = NULL;
    }
}

void coda_aggiungi(coda_t &coda, int vertice)
{
    if (coda == NULL)
        coda = new nodo_t{vertice, NULL};
    else
        coda_aggiungi(coda->next, vertice);
}

int coda_togli(coda_t &coda)
{
    int vertice = coda->vertice;
    coda = coda->next;
    return vertice;    
}

void coda_stampa(const coda_t coda)
{
    for (nodo_t *n=coda; n!=NULL; n=n->next)
        cout << n->vertice << " ";
    cout << endl;
}

void grafo_connetti(grafo_t &grafo, int a, int b)
{
    coda_aggiungi(grafo.adiacenti[a], b);
}

void grafo_archi(const grafo_t &grafo)
{
    for (int i=0; i<grafo.n_vertici; i++)
    {
        cout << i << ":\t";
        coda_stampa(grafo.adiacenti[i]);
    }
    cout << endl;
}

void dfs(const grafo_t grafo, int partenza)
{
    if (grafo.visitati[partenza])
        return;
    grafo.visitati[partenza] = true;
    nodo_t *adiacente = grafo.adiacenti[partenza];
    while (adiacente != NULL)
    {
        dfs(grafo, adiacente->vertice);
        adiacente = adiacente->next;
    }
}

void bfs(const grafo_t grafo)
{
    coda_t coda = new nodo_t{2, NULL};

    cout << "bfs" << endl;
    while (coda != NULL)
    {
        int partenza = coda_togli(coda);
        cout << "\t" << partenza << endl;
        grafo.visitati[partenza] = true;

        for (nodo_t *ap=grafo.adiacenti[partenza]; ap!=NULL; ap=ap->next)
            if (! grafo.visitati[ap->vertice])
                coda_aggiungi(coda, ap->vertice);
    }
}

int main(int argc, char **argv)
{
    grafo_t grafo;
    grafo_init(grafo, 6);

    grafo_connetti(grafo, 2, 0);
    grafo_connetti(grafo, 2, 1);
    grafo_connetti(grafo, 2, 3);
    grafo_connetti(grafo, 2, 4);

    grafo_connetti(grafo, 4, 5);
    grafo_connetti(grafo, 4, 6);

    grafo_archi(grafo);

    bfs(grafo);

}
