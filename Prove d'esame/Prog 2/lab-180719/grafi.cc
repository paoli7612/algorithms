#include <iostream>
#include <stdlib.h>

using namespace std;

#include "grafi.h"

graph new_graph(int nodi){
	graph grafo {
		new Node[nodi],
		new adj_list[nodi],
		nodi
	};
	
	for (int i=0; i<nodi; i++) 
		grafo.nodes[i] = NULL;
	
	return grafo;
}

/* Funzione che aggiunge l'arco orientato (u,v) alla lista di adiacenza del
 * nodo u (aggiunge in testa alla lista). L'arco ha peso w. */
void add_arc(graph& G, int u, int v) {
	adj_node* t = new adj_node;
	t->node = v-1;
	t->next = G.nodes[u-1];
	G.nodes[u-1] = t;
}

/* Funzione che aggiunge l'arco non orientato (u,v) alle liste
 * di adiacenza di u e v. L'arco ha peso w. */
void add_edge(graph& g, int u, int v) {
  add_arc(g,u,v);
  add_arc(g,v,u);
}

int get_dim(graph g){
	return g.dim;
}

adj_list get_adjlist(graph g,int u){
	return g.nodes[u-1];
}

int get_adjnode(adj_list l){
	return (l->node+1);
}

adj_list get_nextadj(adj_list l){
	return l->next;
}

void print_graph(const graph& grafo)
{
	for (int i=0; i<grafo.dim; i++)
	{
		print_node(grafo.vertices[i]);
	}	
}