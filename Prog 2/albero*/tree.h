#ifndef INCLUDE_TREE_H_
#define INCLUDE_TREE_H_

struct node_tree_t {
    int value;
    node_tree_t *nextChild;
    node_tree_t *nextSiblings;
    node_tree_t *parent;
};

typedef node_tree_t *tree_t;


#endif /* INCLUDE_TREE_H_ */
