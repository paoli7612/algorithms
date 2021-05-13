#ifndef INCLUDE_TREE_H_
#define INCLUDE_TREE_H_

struct TreeNode_t {
    int value;
    TreeNode_t *nextChild;
    TreeNode_t *nextSiblings;
    TreeNode_t *parent;
};

typedef TreeNode_t *tree_t;


#endif /* INCLUDE_TREE_H_ */
