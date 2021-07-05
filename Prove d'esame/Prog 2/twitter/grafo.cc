
#include "grafo.h"

void stampa(const nodo_t nodo)
{
  std::cout << nodo.tipo << " ";

  char &c = nodo.contenuto;
  for (int i=0; c[i]!='\n')
    std::cout << c[i];
}

void stampa(adj_list_t list)
{
  if (list == NULL)
    return;

  stampa(list->inf);
  stampa(list->next);
}

void stampa(const grafo_t grafo)
{
  for (int i=0; i<grafo.dim; i++)
    stampa(grafo.adj_list);
}
