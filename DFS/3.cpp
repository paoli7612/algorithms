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

void show(tree_t tree, int level, int current=0)
{
  if (tree == NULL)
    return;
  if (level == current)
    cout << tree->value << " ";
  for (int i=0; i<2; i++)
    show(tree->next[i], level, current+1);
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

int main(int argc, char** argv)
{
  srand(time(NULL));
  const int LIVELLI = 3;

  tree_t tree = NULL;
  add_child(tree, LIVELLI);

  for (int i=0; i<LIVELLI+1; i++)
    {
      for (int j=i; j<LIVELLI; j++)
        cout << " ";
      show(tree, i);
      cout << endl;
    }

  return 0;
}
