#ifndef GRAFO_H
#define GRAFO_H

struct nodo_t {
  char tipo;
  char contenuto[80];
};

struct adj_node_t {
  nodo_t inf;
  adj_node_t *next;
};
typedef adj_node_t *adj_list_t;

struct grafo_t {
  int dim;
  adj_list_t *adj_list;
};

void stampa(const grafo_t grafo);

#endif
