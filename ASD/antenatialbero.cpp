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

void inorder(tree_t tree)
{
    if (tree == NULL)
        return;
    
    inorder(tree->left);
    cout << " " << tree->value << " ";
    inorder(tree->right);
}

bool foo(tree_t tree, node_t *node=NULL)
{
    if (tree == NULL)
        return false;
    
    if (tree == node)
        return true;
    
    if (foo(tree->left))
        cout << tree->value << endl;
    else if (foo(tree->right))
        cout << tree->value << " ";
    
    return true;
}

int main(int argc, char **argv)
{
    tree_t tree = 
    new_node(9,
        new_node(8,
            new_node(6,
                new_node(2),
                new_node(1)
                ),
            new_node(5,
                new_node(0),
                new_node(1)
                )
            ),
        new_node(7,
            new_node(4,
                new_node(2),
                new_node(3)
                ),
            new_node(3,
                new_node(4),
                new_node(5)
                )
            )
        );
    inorder(tree);
    cout << endl;

    node_t *n = tree->left->right->right;

    cout << n->value << endl;

    foo(tree, n);

    return 0;
}