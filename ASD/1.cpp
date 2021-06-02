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

int height(tree_t tree, int h=0)
{
    if (tree == NULL)
        return 0;
    else
        return max(height(tree->left), height(tree->right)) + 1;
}

void insert(tree_t &tree, node_t *node)
{
    if (tree == NULL)
    {
        tree = node;
        return;
    }

    if (tree->right == NULL)
    {
        if (tree->left == NULL)
            tree->left = node;
        else
            tree->right = node;
    }
    else
    {
        int l = height(tree->left);
        int r = height(tree->right);

        if (l > r)
            insert(tree->right, node);
        else
            insert(tree->left, node);
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
    
    cout << tree->id << "(";
    preorder(tree->left);
    preorder(tree->right);
    cout << ") ";
}

int main(int argc, char **argv)
{
    tree_t tree = new_node(1);

    for (int i=0; i<10; i++)
    {
        insert(tree, i);
    }

    preorder(tree);

    return 0;
}