#include "grafi.h"

using namespace std;

void newGraph(Graph_t &graph, const int n_vertix)
{
    int n = n_vertix/2;
    graph.mat = new Weight_t*[n];
    for (int i=0; i<n; i++)
        graph.mat[i] = new Weight_t[n_vertix];

    for (int i=0; i<n; i++)
        for (int x=0; x<n_vertix; x++)
            graph.mat[i][x].v = 'R';
        
    graph.n_vertix = n_vertix;
}

void printGraph(const Graph_t &graph)
{
    for (int i=0; i<graph.n_vertix/2; i++)
    {
        for (int x=0; x<graph.n_vertix; x++)
            cout << (char)(graph.mat[i][x].v) << "\t";
        cout << endl;
    }
}

void connect(Graph_t &graph, const int a, const int b, const Weight_t weight)
{

    if (a < graph.n_vertix/2)
    {
        graph.mat[a][b] = weight;
    }
    else
    {
        graph.mat[graph.n_vertix-a-1][graph.n_vertix-b-1] = weight;
    }

}

void load(Graph_t &graph, string filename)
{
}