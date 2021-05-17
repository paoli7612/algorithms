#include <iostream>
#include "tree.h"


#ifndef INCLUDE_QUEUE_H_
#define INCLUDE_QUEUE_H_

#include "../type.h"

struct TreeNode_t;
struct QueueNode_t {
    QueueNode_t *next;
    TreeNode_t *treeNode;
};

typedef QueueNode_t *Queue_t;

void enqueue(Queue_t &queue, TreeNode_t *treeNode);
void print(Queue_t queue);
bool isEmpty(Queue_t queue);

#endif /* INCLUDE_QUEUE_H_ */
