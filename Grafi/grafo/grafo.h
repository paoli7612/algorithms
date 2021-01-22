int numero_casuale(){
	return rand()%10;
}

typedef struct adj_t {
	int *vertice;
	adj_t *next;
}* lista_adj;

struct grafo_t {
	int *vertici;
	lista_adj *adj;
	int dim;
};

void aggiungi(lista_adj &adj, int *vertice)
{
	if (adj == NULL)
	{
		adj = new adj_t;
		adj->vertice = vertice;
		adj->next = NULL;
	}
	else
	{
		aggiungi(adj->next, vertice);
	}
}

void collega_a(grafo_t grafo, const int a, const int b)
{
	aggiungi(grafo.adj[a], &grafo.vertici[b]);
}

grafo_t nuovo_grafo(const int dim)
{
	grafo_t grafo;

	grafo.dim = dim;
	grafo.vertici = new int[dim];
	grafo.adj = new lista_adj[dim];

	for (int i=0; i<dim; i++)
	{
		grafo.vertici[i] = numero_casuale();
		grafo.adj[i] = NULL;
		int n = rand()%5;
		for (int j=0; j<n; j++)
			collega_a(grafo, i, rand()%dim);
	}

	return grafo;
}


