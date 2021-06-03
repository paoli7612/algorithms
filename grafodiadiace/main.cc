#include <iostream>
#include <fstream>

using namespace std;

struct grafo_t {
    int vertici;
    int **pesi;

    int righe, colonne;
};

void sort(int &a, int &b)
{
    if (a > b)
    {
        a += b;
        b = a-b;
        a = a-b;
    }
}

void init_grafo(grafo_t &grafo, int vertici)
{
    grafo.vertici = vertici;
    grafo.righe = (vertici / 2);
    grafo.colonne = vertici;

    grafo.pesi = new int*[grafo.righe];
    for (int y=0; y<grafo.righe; y++)
        grafo.pesi[y] = new int[grafo.colonne];


}

void stampa_grafo(const grafo_t &grafo)
{
    for (int i=0; i<grafo.colonne; i++)
        cout << i << "\t";
    cout << endl;

    for (int i=0; i<grafo.colonne; i++)
        cout << "--------";
    cout << endl;

    for (int y=0; y<grafo.righe; y++)
    {
        for (int x=0; x<grafo.colonne; x++)
        {
            if (!grafo.pesi[y][x]) cout << " ";
            cout << (char)grafo.pesi[y][x] << "   |   ";
        }
        cout << endl;
    }
    cout << endl;
}

void connetti(grafo_t &grafo, int a, int b, int peso)
{
    sort(a, b);

    if (a < grafo.righe)
    {
        grafo.pesi[a][b] = peso;
    }
    else
    {
        a = grafo.vertici - a - 1;
        b = grafo.vertici - b - 1;
        grafo.pesi[a][b] = peso;
    }
}


int main(int argc, char **argv)
{
    ifstream file("in1.txt");

    grafo_t grafo;

    int vertici;
    file >> vertici;

    init_grafo(grafo, vertici);

    int n;
    file >> n;
    for (int i=0; i<n; i++)
    {
        int a, b;
        char peso;
        file >> a >> b >> peso;
        connetti(grafo, a, b, peso);
    }

    stampa_grafo(grafo);

    return 0;
}