#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *left, *right;
};

typedef node_t *tree_t;

node_t *n(int value, node_t *left=NULL, node_t *right=NULL)
{
    return new node_t {value, left, right};
}

float media(tree_t tree, int &somma, int &n)
{
    if (tree == NULL)
        return 0;

    n++;
    somma += tree->value;

    media(tree->left, somma, n);
    media(tree->right, somma, n);

    return ((float)somma)/n;
}

int main(int argc, char **argv)
{

    tree_t tree = n(1, n(2, n(4), n(5)), n(3, n(6), n(7)));
    int s=0, n=0;
    cout << media(tree, s, n);

    return 0;
}