#include <iostream>
#include <cstring>
#include <cmath>

struct Node_t {
    int inf;

    Node_t *left;
    Node_t *right;
    Node_t *parent;
};

typedef Node_t *BTree_t;

Node_t *newNode(int inf);
void show_tree(BTree_t tree, const int LIVELLI);
void add(BTree_t &tree, Node_t *node);
void add(BTree_t &tree, Node_t *node);
void deleteNode(BTree_t tree);
Node_t *search(BTree_t tree, int inf);

Node_t *leftest(BTree_t tree);