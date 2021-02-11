#include <iostream>
#include <cmath>
#include <ctime>
#include <stdlib.h>

using namespace std;

// nodo albero con due figli
struct node_t {
  int value;
  node_t *next[2];
};
typedef node_t *tree_t;

// init nodo con puntatori ai figli su NULL
node_t *new_node(int value)
{
  node_t *node = new node_t;
  node->value = value;
  for (int i=0; i<2; i++)
    node->next[i] = NULL;
  return node;
}

// riempi albero di *level* figli casuali
void add_child(tree_t &tree, int level)
{
  if (level == 0)
  return;
  tree = new_node(rand()%100);
  for (int i=0; i<2; i++)
  {
    add_child(tree->next[i], level-1);
  }
}

// stampa albero tutti i figli ad altezza *level*
void show(tree_t tree, int height, int spaces, int current=0)
{
  if (tree == NULL)
    return;
  if (height == current)
  {
    for (int i=0; i<spaces; i++)
      cout << "  ";
    if (tree->value < 10)
      cout << " ";
    cout << tree->value << "  ";
    for (int i=0; i<spaces; i++)
      cout << "  ";
  }
  else if(height > current)
    for (int i=0; i<2; i++)
      show(tree->next[i], height, spaces, current+1);
}

// Stampa albero completo "ordinato"
void show_tree(tree_t tree, const int LIVELLI)
{
  for (int i=0; i<LIVELLI; i++)
    {
      show(tree, i, pow(2, LIVELLI-i-1)-1);
      cout << endl << endl;
    }
}

// cerca *value* ricorsivamente nell'albero
// se value != nodo cerco nei nei figli 0 e 1
bool search(tree_t tree, int value)
{
  if (tree == NULL)
    return false;
  if (tree->value == value)
    return true;
  else
    cout << tree->value << " controllato" << endl;
  return search(tree->next[0], value) || search(tree->next[1], value);
}

int main(int argc, char** argv)
{
  srand(time(NULL));

  int LIVELLI;
  do {
    cout << "Liveli: ";
    cin >> LIVELLI;
  } while(LIVELLI < 1 || LIVELLI > 25);

  tree_t tree = NULL;
  add_child(tree, LIVELLI);
  show_tree(tree, LIVELLI);

  int N;
  cout << "Inserisci il numero da cercare: ";
  cin >> N;
  if (search(tree, N))
    cout << "Numero presente nell'albero" << endl;
  else
    cout << "Il numero non è presente" << endl;

  system("pause");
  return 0;
}
