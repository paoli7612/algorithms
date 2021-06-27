#ifndef GRAFI_H_
#define GRAFI_H_
#include "node.h"

struct adj_node {
  int node;
  float weight;
  struct adj_node* next;
};

typedef adj_node* adj_list;

struct graph {
  Node *vertices;
  adj_list *nodes;
  int dim;
};

graph new_graph(int);
void add_arc(graph& G, int u, int v, float w);
void add_edge(graph& g, int u, int v, float w);

int get_dim(graph);
adj_list get_adjlist(graph,int);
int get_adjnode(adj_list);
adj_list get_nextadj(adj_list);

void print_graph(const graph&);

#endif /* GRAFI_H_ */
