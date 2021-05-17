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

TreeNode_t *deleteNext(QueueNode_t *node)
{
    TreeNode_t *t = node->next->treeNode;
    delete node->next;
    node->next = NULL;
    return t;
}

TreeNode_t *dequeue(Queue_t &queue){
    if (queue == NULL)
        return NULL;
    for (; queue->next != NULL; queue=queue->next);
    return deleteNext(queue);
}

bool isEmpty(Queue_t queue)
{
    return queue == NULL;
}
