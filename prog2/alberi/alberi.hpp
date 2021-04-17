#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *left, *right;
};

typedef node_t *tree_t;

void stampa_albero(tree_t tree, int livello=0)
{
    if (tree == NULL)
        return;

    for (int i=0; i<livello; i++)
        cout << "  ";

    cout << tree->value << endl;

    stampa_albero(tree->left, livello+1);
    stampa_albero(tree->right, livello+1);
}

tree_t nuovo_albero(tree_t tree, int n)
{
    if (n == 0)
        return tree;
        
    tree = new node_t {rand()%20, NULL, NULL};

    tree->left = nuovo_albero(tree->left, n-1);
    tree->right = nuovo_albero(tree->right, n-1);

    return tree;
}