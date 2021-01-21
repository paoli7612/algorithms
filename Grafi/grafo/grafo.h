typedef struct adj_t {
	int nodo;
	float peso;
	adj_t *next;
}* lista;

struct grafo_t {
	int *vertici;
	adj_t *adj;
	int dim;
};

grafo_t nuovo_grafo(const int dim)
{
	grafo_t grafo;
	
	grafo.dim = dim;
	grafo.adj = new adj_t[dim];
	grafo.vertici = new int[dim];
	
	for (int i=0; i<dim; i++){
		grafo.vertici[i] = 0;
		grafo.adj[i];
	}
	
	return grafo;
}

void stampa(const adj_t *adj)
{
		
}

void stampa(const grafo_t &grafo)
{
	using namespace std;

	cout << "Grafo___" << endl;
	cout << "\tdim: " << grafo.dim << endl;
	
	cout << "\tvertici: "; 
	for (int i=0; i<grafo.dim; i++)
		cout << grafo.vertici[i] << " ";
	cout << endl;
	
	cout << "\tadj: ";
	for (int i=0; i<grafo.dim; i++){
		cout << endl << "\t\t";
		cout << grafo.vertici[i] << ": ";
		stampa(&grafo.adj[i]);		
	}
	
	cout << endl << "_______________" << endl;
}
