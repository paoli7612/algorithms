#include <iostream>

using namespace std;

struct node_t {
    int value;
    node_t *left, *right;
};

typedef node_t *tree_t;

node_t *new_node(int value, node_t *left=NULL, node_t *right=NULL)
{
    return new node_t {
        value, left, right
    };
}

void order(tree_t tree)
{
    if (tree == NULL)
        return;
    
    order(tree->left);
    cout << " " << tree->value << " ";
    order(tree->right);
}

int main(int argc, char **argv)
{
    tree_t tree = new_node(1, new_node(2, new_node(4, new_node(8), new_node(9)), new_node(5, new_node(10), new_node(11))), new_node(3, new_node(6), new_node(7)));
    order(tree);

    return 0;
}