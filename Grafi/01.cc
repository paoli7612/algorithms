#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_VERTICI = 10;

// Lista adiacenza
struct adj_t {
	int *vertice;
	adj_t *next;
};

void aggiungi_adj(adj_t *&adj, int *vertice)
{
	if (adj == NULL)
	{
		adj = new adj_t;
		adj->vertice = vertice;
		adj->next = NULL;
	}
	else
	{
		aggiungi_adj(adj->next, vertice);
	}
}

void stampa_adj(const adj_t *adj)
{
	if (adj != NULL)
	{
		cout << *adj->vertice << " ";
		stampa_adj(adj->next);
	}
}

// Grafo
struct grafo_t {
	int vertici[MAX_VERTICI];
	adj_t* adj[MAX_VERTICI];
};

void collega_vertici(grafo_t &grafo, const int a, const int b)
{
	cout << grafo.vertici[a] << " -> " << grafo.vertici[b] << endl;
	aggiungi_adj(grafo.adj[a], &grafo.vertici[b]);
}

void init_grafo(grafo_t &grafo)
{
	for (int i=0; i<MAX_VERTICI; i++){
		grafo.vertici[i] = rand()%10;
		grafo.adj[i] = NULL;
	}
		
	for (int i=0; i<MAX_VERTICI; i++)
	{
		int n_collegamenti = rand()%5;
		for (int j=0; j<n_collegamenti; j++)
			collega_vertici(grafo, i, rand()%MAX_VERTICI);
	}
}

void stampa_grafo(const grafo_t &grafo){
	for (int i=0; i<MAX_VERTICI; i++)
		cout << grafo.vertici[i] << " ";    
	cout << endl;
	
	for (int i=0; i<MAX_VERTICI; i++)
	{
		cout << i << ") "<< grafo.vertici[i] << ": ";
		stampa_adj(grafo.adj[i]);
		cout << endl;
	}
	cout << endl;
}

int main(int argc, char** argv)
{
		
	srand(time(NULL));

	cout << "Definiamo il grafo" << endl;	
	grafo_t grafo;

	cout << "Inizializziamo il grafo" << endl;
	init_grafo(grafo);
	
	cout << "Stampiamo il grafo" << endl;
	stampa_grafo(grafo);
	
	return 0;
}
