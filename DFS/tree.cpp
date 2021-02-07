#include <iostream>
#include <cmath>

using namespace std;

struct node_t {
  int value;
  node_t *next[2];
};

typedef node_t *tree_t;

node_t *new_node(int value)
{
  node_t *node = new node_t;
  node->value = value;
  for (int i=0; i<2; i++)
    node->next[i] = NULL;
  return node;
}

void add_child(tree_t &tree, int level)
{
  if (level == 0)
  return;
  tree = new_node(rand()%10);
  for (int i=0; i<2; i++)
  {
    add_child(tree->next[i], level-1);
  }
}

void show(tree_t tree, int level, int spaces, int current=0)
{
  if (tree == NULL)
    return;
  if (level == current)
  {
    for (int i=0; i<spaces; i++)
      cout << " ";
    cout << '/' << tree->value << '\\';
    for (int i=0; i<spaces; i++)
      cout << " ";
  }
  else if(level > current)
    for (int i=0; i<2; i++)
      show(tree->next[i], level, spaces, current+1);
}


void show_tree(tree_t tree, const int LIVELLI)
{
  for (int i=0; i<LIVELLI; i++)
    {
      for (int j=0; j<LIVELLI-i; j++)
        cout << " ";
      show(tree, i, pow(2, LIVELLI-i-1)-1);
      cout << endl;
    }
}

int main(int argc, char** argv)
{
  srand(time(NULL));
  const int LIVELLI = 7;

  tree_t tree = NULL;
  add_child(tree, LIVELLI);
  show_tree(tree, LIVELLI);


  return 0;
}
