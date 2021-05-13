#include <iostream>

#include "tree.h"

TreeNode_t *new_node(type_t value, Tree_t nextChild, Tree_t firstChild)
{

}

void print_preorder(Tree_t tree)
{
    if (tree == NULL)
        return;

}

void print(Tree_t tree, const print_mode_t mode)
{
    switch (mode)
    {
    case PREORDER:
        print_preorder(tree);
        break;
    
    default:
        break;
    }
}