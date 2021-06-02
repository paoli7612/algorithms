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

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
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

int height(tree_t tree, int h=0)
{
    if (tree == NULL)
        return 0;
    else
        return max(height(tree->left), height(tree->right)) + 1;
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
    tree->left = new_node(2);
    tree->right = new_node(4);
    tree->left->left = new_node(5);

    for (int i=0; i<10; i++)
    {
        insert(tree, i);
    }

    preorder(tree);

    cout << height(tree) << endl;

    return 0;
}