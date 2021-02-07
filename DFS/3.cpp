#include <iostream>

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

void show(tree_t tree, int level, int spaces, int current=0, int h=6)
{
  if (tree == NULL)
    return;
  if (level == current)
  {
    for (int i=0; i<spaces+h; i++)
      cout << " ";
    cout << '/' << tree->value << '\\';
  }
  else
  {
    for (int i=0; i<2; i++)
      show(tree->next[i], level, spaces, current+1, --h);
  }
}


void show_tree(tree_t tree, const int LIVELLI)
{
  for (int i=0; i<LIVELLI; i++)
    {
      show(tree, i, (LIVELLI-i-1));

      cout << endl;
    }
}

int main(int argc, char** argv)
{
  srand(time(NULL));
  const int LIVELLI = 6;

  tree_t tree = NULL;
  add_child(tree, LIVELLI);
  show_tree(tree, LIVELLI);


  return 0;
}
