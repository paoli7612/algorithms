#include <iostream>

#ifndef INCLUDE_TREE_H_
#define INCLUDE_TREE_H_

#include "queue.h"
#include "type.h"

struct TreeNode_t {
    int value;
    TreeNode_t *firstChild;
    TreeNode_t *nextSiblings;
    TreeNode_t *parent;
};

typedef TreeNode_t *Tree_t;

TreeNode_t *new_node(type_t value, Tree_t nextSiblings, Tree_t firstChild);

enum print_mode_t {PREORDER, INORDER, POSTORDER};
void print(Tree_t tree, const print_mode_t mode);

void print_graphic(Tree_t tree);

#endif /* INCLUDE_TREE_H_ */
