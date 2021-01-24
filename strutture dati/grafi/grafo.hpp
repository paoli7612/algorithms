#include <iostream>
#include <fstream>

#define MAX_VERTICI 10
#define MAX_ARCHI 20

using namespace std;

const char FILENAME[] = "grafo.txt";

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

void collega_vertici(grafo_t &, const int, const int);

//________________________________________________NUOVO
grafo_t nuovo_grafo()
{
    grafo_t grafo;

    grafo.n_archi = 0;
    grafo.n_vertici = 0;

    return grafo;
}

vertice_t nuovo_vertice(const int value)
{
    vertice_t vertice;

    vertice.value = value;

    return vertice;
}

arco_t nuovo_arco(vertice_t *x, vertice_t *y)
{
    arco_t arco;

    arco.x = x;
    arco.y= y;

    return arco;
}


//________________________________________________AGGIUNGI
bool aggiungi_vertice(grafo_t &grafo, const vertice_t &vertice)
{
    if (grafo.n_vertici == MAX_VERTICI)
        return false;

    grafo.vertici[grafo.n_vertici++] = vertice;
    return true;
}

bool aggiungi_arco(grafo_t &grafo, const arco_t arco)
{
    if (grafo.n_archi == MAX_ARCHI)
        return false;
    
    grafo.archi[grafo.n_archi++] = arco;
    return true;
}

//________________________________________________STAMPA
void stampa_vertice(vertice_t vertice, ostream &out=cout, bool is_file=false)
{
    out << vertice.value << " ";
}

void stampa_arco(arco_t arco, ostream &out=cout, bool is_file=false)
{
    if (is_file)
        out << arco.x->value << " " << arco.y->value << endl;
    else 
        out << " " << arco.x->value << " -> " << arco.y->value << " ";
}

void stampa_grafo(grafo_t grafo, ostream &out=cout, bool is_file=false)
{
    if (is_file)
        out << grafo.n_vertici << endl;
    for (int i=0; i<grafo.n_vertici; i++)
        stampa_vertice(grafo.vertici[i], out, is_file);

    out << endl;

    if (is_file)
        out << grafo.n_archi << endl;
    for (int i=0; i<grafo.n_archi; i++)
    {
        stampa_arco(grafo.archi[i], out, is_file);
        cout << endl;
    }
}

//________________________________________________SALVA

bool salva(grafo_t &grafo)
{
    ofstream file(FILENAME);

    if (!file)
        return false;

    stampa_grafo(grafo, file, true);

    file.close();
    return static_cast<bool>(file);
}

bool carica(grafo_t &grafo)
{
    grafo.n_archi = 0;
    grafo.n_vertici = 0;
    ifstream file(FILENAME);

    if (!file)
        return false;
    
    int m; // n_vertici
    file >> m;
    for (int i=0; i<m; i++)
    {
        int a;
        file >> a;
        aggiungi_vertice(grafo, nuovo_vertice(a));
    }
    
    int n; // n_archi
    file >> n;
    for (int i=0; i<n; i++)
        {
            int a, b;
            file >> a >> b;
            collega_vertici(grafo, a, b);
        }


    file.close();
    return static_cast<bool>(file);
}

//________________________________________________SPECIAL

/* Crea arco dal vertice ad indice a al vertice ad indice b */
void collega_vertici(grafo_t &grafo, const int a, const int b)
{
    vertice_t *x = &grafo.vertici[a];
    vertice_t *y = &grafo.vertici[b];
    arco_t arco = nuovo_arco(x, y);
    aggiungi_arco(grafo, arco);
}

/* A partire dal vertice ad indice a stampa tutti i vertici collegati */
void stampa_percorso(grafo_t &grafo, const int a, int max=10)
{
    if (!max)
        return;

    vertice_t *x = &grafo.vertici[a];
    stampa_vertice(*x, cout, false);

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