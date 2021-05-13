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

TreeNode_t *new_node(type_t value, Tree_t nextChild=NULL, Tree_t firstChild=NULL);

#endif /* INCLUDE_TREE_H_ */
