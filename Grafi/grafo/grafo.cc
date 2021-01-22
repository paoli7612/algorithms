#include <iostream>

#include "grafo.h"

using namespace std;

void stampa(adj_t *adj)
{
	if (adj == NULL)
		return;
	
	cout << *(adj->vertice) << " ";
	stampa(adj->next);
}

void stampa(const grafo_t &grafo)
{
	cout << "______GRAFO______" << endl;

	for (int i=0; i<grafo.dim; i++)
	{
		cout << grafo.vertici[i] << ":" << "\t";
		stampa(grafo.adj[i]);
		cout << endl;
	}
	cout << endl;
	cout << "_________________" << endl;
}

void stampa_catena(const grafo_t grafo, int i, int max=10)
{
}

int main(int argc, char** argv)
{
	srand(time(NULL));

	grafo_t grafo = nuovo_grafo(5);
	stampa(grafo);

	cout << endl;
	stampa_catena(grafo, 0);

	return 0;	
}
