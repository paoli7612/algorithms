#include <iostream>

#include "tree.h"

TreeNode_t *new_node(type_t value, Tree_t nextSiblings, Tree_t firstChild)
{
    TreeNode_t *node = new TreeNode_t;
    node->value = value;
    node->nextSiblings = nextSiblings;
    node->firstChild = firstChild;
    return node;
}

void print_preorder(Tree_t tree)
{
    if (tree == NULL)
        return;

    std::cout << tree->value << " ";
    
    TreeNode_t *ap = tree->firstChild;
    if (ap == NULL)
        std::cout << "\b";
    while (ap != NULL)
    {
        std::cout << "(";
        print_preorder(ap);
        ap = ap->nextSiblings;
        std::cout << ")";
    }
    

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