#include "queue.h"

void print(Queue_t queue)
{
    for (; queue!=NULL; queue=queue->next)
        std::cout << queue->treeNode->value << " ";
    std::cout << std::endl;
}

void enqueue(Queue_t &queue, TreeNode_t *treeNode)
{
    QueueNode_t *nq = new QueueNode_t;
    nq->treeNode = treeNode;
    nq->next = queue;
    queue = nq;
}

bool isEmpty(Queue_t queue)
{
    return queue == NULL;
}
