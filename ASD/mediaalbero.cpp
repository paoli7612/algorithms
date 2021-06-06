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

int main(int argc, char **argv)
{

    tree_t tree = n(1, n(2, n(4), n(5)), n(3, n(6), n(7)));

    while (tree != NULL)
    {
        cout << tree->value;
        tree = tree->left;
    }

    return 0;
}