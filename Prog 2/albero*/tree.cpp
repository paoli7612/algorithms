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
    if (ap == NULL) { std::cout << "\b"; return; }
    while (ap != NULL)
    {
        std::cout << "(";
        print_preorder(ap);
        ap = ap->nextSiblings;
        std::cout << ")";
    }
}

void print_postorder(Tree_t tree)
{
    if (tree == NULL)
        return;

    TreeNode_t *ap = tree->firstChild;
    while (ap != NULL)
    {
        std::cout << "(";
        print_preorder(ap);
        ap = ap->nextSiblings;
        std::cout << ")";
    }

    std::cout << tree->value << " ";

}

void print(Tree_t tree, const print_mode_t mode)
{
    switch (mode)
    {
    case PREORDER:
        print_preorder(tree);
        break;
    case POSTORDER:
        print_postorder(tree);
        break;

    default:
        break;
    }
    std::cout << std::endl;
}

int width(Tree_t tree)
{
    int w = 4;
    for (TreeNode_t *ap=tree->firstChild; ap!=NULL; ap=ap->nextSiblings)
        w += width(ap);
    return w;
}

int height(Tree_t tree)
{
    if (tree == NULL)
        return 0;
    
    int max = 0;
    TreeNode_t *ap = tree->firstChild;
    while (ap != NULL) 
    {
        int h = height(ap);
        if (h > max)
            max = h;
        ap = ap->nextSiblings;
    }
    return max + 1;
}

void print_graphic(Tree_t tree)
{  
    for (int i=0; i<width(tree); i++)
        std::cout << "  ";
    std::cout << tree->value;
    for (int i=0; i<width(tree); i++)
        std::cout << " ";

    if (tree->nextSiblings != NULL)
        print_graphic(tree->nextSiblings);
    if (tree->firstChild != NULL) {
        std::cout << std::endl;
        print_graphic(tree->firstChild);
    }
}

void print_level(Tree_t tree, int spaces, int level, int current=0)
{
    if (level == current)
    {
        for (int i=0; i<spaces; i++)
            std::cout << " ";
        std::cout << tree->value << " ";
        for (int i=0; i<spaces; i++)
            std::cout << " ";
    } else {
        TreeNode_t *ap = tree->firstChild;
        while (ap != NULL)
        {
            print_level(ap, width(ap)/2, level, current+1);
            
            for (int i=0; i<width(ap)/2; i++)
                std::cout << " ";
            ap = ap->nextSiblings;
        }
    }
        
}

void print_graphic2(Tree_t tree)
{  
    int h = height(tree);
    for (int i=0; i<h; i++)
    {
        print_level(tree, width(tree)/2, i);
        std::cout << std::endl;
    }  
}

void bfs(Tree_t tree)
{
    Queue_t queue = NULL;
    std::cout << tree->value << std::endl;
    enqueue(queue, tree);
    print(queue);
}