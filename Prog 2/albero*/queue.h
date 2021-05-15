#include <iostream>

#ifndef INCLUDE_QUEUE_H_
#define INCLUDE_QUEUE_H_

#include "tree.h"
#include "../type.h"

struct QueueNode_t {
    QueueNode_t *next;
};

typedef QueueNode_t *Queue_t;

#endif /* INCLUDE_QUEUE_H_ */
