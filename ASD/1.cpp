#include <iostream>

using namespace std;

struct node_t {
    int id;
    node_t *left, *right;
};

typedef node_t *tree_t;

node_t *new_node(int id)
{
    return new node_t {
        id,
        NULL, NULL
    };
}

void insert(tree_t &tree, node_t *node)
{
    if (tree == NULL)
    {
        tree = node;
        return;
    }
}

void insert(tree_t &tree, int id)
{
    insert(tree, new_node(id));
}

void preorder(tree_t tree)
{
    if (tree == NULL)
        return;
    
    cout << tree->id << " ";
    preorder(tree->left);
    preorder(tree->right);
}

int main(int argc, char **argv)
{
    tree_t tree = new_node(1);
    tree->right = new_node(2);
    preorder(tree);

    for (int i=0; i<10; i++)
    {
        insert(tree, i);
    }

    return 0;
}