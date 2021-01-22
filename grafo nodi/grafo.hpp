#include <iostream>

#define MAX_VERTICI 10
#define MAX_ARCHI 20

using namespace std;

struct vertice_t {
    int value;
};

struct arco_t {
    vertice_t *x, *y;
};

struct grafo_t {
    vertice_t vertici[MAX_VERTICI];
    int n_vertici;

    arco_t archi[MAX_ARCHI];
    int n_archi;
};

//________________________________________________NUOVO
grafo_t nuovo()
{
    grafo_t grafo;

    grafo.n_archi = 0;
    grafo.n_vertici = 0;

    return grafo;
}

vertice_t nuovo(const int value)
{
    vertice_t vertice;

    vertice.value = value;

    return vertice;
}

arco_t nuovo(vertice_t *x, vertice_t *y)
{
    arco_t arco;

    arco.x = x;
    arco.y= y;

    return arco;
}


//________________________________________________AGGIUNGI
bool aggiungi(grafo_t &grafo, const vertice_t &vertice)
{
    if (grafo.n_vertici == MAX_VERTICI)
        return false;

    grafo.vertici[grafo.n_vertici++] = vertice;
    return true;
}

bool aggiungi(grafo_t &grafo, const arco_t arco)
{
    if (grafo.n_archi == MAX_ARCHI)
        return false;
    
    grafo.archi[grafo.n_archi++] = arco;
    return true;
}

//________________________________________________STAMPA
void stampa(vertice_t vertice)
{
    cout << " " << vertice.value << " ";
}

void stampa(arco_t arco)
{
    cout << " " << arco.x->value << " -> " << arco.y->value << " ";
}

void stampa(grafo_t grafo)
{
    for (int i=0; i<grafo.n_vertici; i++)
        stampa(grafo.vertici[i]);

    cout << endl;

    for (int i=0; i<grafo.n_archi; i++)
    {
        stampa(grafo.archi[i]);
        cout << endl;
    }

    cout << endl;
}

//________________________________________________SPECIAL

/* Crea arco dal vertice ad indice a al vertice ad indice b */
void collega_vertici(grafo_t &grafo, const int a, const int b)
{
    vertice_t *x = &grafo.vertici[a];
    vertice_t *y = &grafo.vertici[b];
    arco_t arco = nuovo(x, y);
    aggiungi(grafo, arco);
}

/* A partire dal vertice ad indice a stampa tutti i vertici collegati */
void stampa_percorso(grafo_t &grafo, const int a, int max=10)
{
    if (!max)
        return;

    vertice_t *x = &grafo.vertici[a];
    stampa(*x);

    for (int i=0; i<grafo.n_archi; i++)
    {
        if (grafo.archi[i].x->value == x->value)
        {
            stampa_percorso(grafo, grafo.archi[i].y->value, max-1);
            return;
        }   
    }
    cout << endl;
    return;

}