#include "tree.h"

Node_t *newNode(int inf)
{
    return new Node_t {
        inf,
        NULL,
        NULL,
        NULL
    };
}

// stampa albero tutti i figli ad altezza *level*
void show(BTree_t tree, int height, int spaces, int current=0)
{

  if (height == current)
  {
    for (int i=0; i<spaces; i++)
      std::cout << "  ";

    if (tree == NULL)
      std::cout << "    ";
    else
    {
      if (tree->inf < 10)
        std::cout << " ";
      std::cout << tree->inf << "  ";
    }
    
    for (int i=0; i<spaces; i++)
      std::cout << "  ";
  }
  else if(height > current)
    {
        if (tree==NULL)
        {
          show(NULL, height, spaces, current+1);
          show(NULL, height, spaces, current+1);
        }
        else
        {
          show(tree->left, height, spaces, current+1);
          show(tree->right, height, spaces, current+1);
        }
    }
}

// Stampa albero completo "ordinato"
void show_tree(BTree_t tree, const int LIVELLI)
{
  for (int i=0; i<LIVELLI; i++)
    {
      show(tree, i, pow(2, LIVELLI-i-1)-1);
      std::cout << std::endl << std::endl;
    }
}

void add(BTree_t &tree, Node_t *node)
{
  if (tree == NULL)
  {
    tree = node;
    return;
  }

  bool running = true;

  Node_t *ap = tree;
  while (running)
  {
    if (ap->inf < node->inf)
      {
        if (ap->right == NULL)
        {
          ap->right = node;
          node->parent = ap;
          running = false;
        }
        else
          ap = ap->right;
      }
    else
      {
        if (ap->left == NULL)
        {
          ap->left = node;
          node->parent = ap;
          running = false;
        }
        else 
          ap = ap->left;
      }
  }

}

void add(BTree_t &tree, int inf)
{
  add(tree, newNode(inf));
}

int count(BTree_t tree)
{
  if (tree == NULL)
    return 0;
  return 1 + count(tree->left) + count(tree->right);
}

Node_t *search(BTree_t tree, int inf)
{
  if (tree == NULL)
    return NULL;
  std::cout << tree->inf << " ";
  if (inf == tree->inf)
    return tree;
  else {
    if (inf < tree->inf)
      return search(tree->left, inf);
    else
      return search(tree->right, inf);
  }
}

Node_t *leftest(BTree_t tree)
{
  if (tree->left == NULL)
    return tree;
  else
    return leftest(tree->left);
}

void deleteNode(BTree_t &tree, Node_t *node)
{
}
