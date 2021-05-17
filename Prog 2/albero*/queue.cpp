#include "queue.h"

void print(Queue_t queue, int max)
{
    for (int i=0; queue!=NULL && i++<max; queue=queue->next)
        std::cout << queue->treeNode->value << " ";
    std::cout << std::endl;
}

void enqueue(Queue_t &queue, TreeNode_t *treeNode)
{
    std::cout << "enqueue: " << treeNode << "\n";
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
    std::cout << "dequeue\n";
    if (queue == NULL)
        return NULL;
        
    if (queue->next == NULL)
    {
        TreeNode_t *t = queue->treeNode;
        queue = NULL;
        delete queue;
        return t;
    }
    
    QueueNode_t *ap = queue;
    for (; ap->next->next!=NULL; ap=ap->next);
    return deleteNext(ap);
}

bool isEmpty(Queue_t queue)
{
    return queue == NULL;
}
