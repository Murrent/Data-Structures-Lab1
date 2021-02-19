//
// Created by Martin on 2021-02-12.
//

#ifndef LAB1_ALGORITHM_QUEUE_H
#define LAB1_ALGORITHM_QUEUE_H

#include "list.h"

typedef struct queue_
{
    List* list;
    Node* tail;
    Node* head;
}Queue;

Queue* createQueue();
int queueEmpty(Queue* queue);
int enqueue(Queue* queue, int key);
Node* dequeue(Queue* queue);
int printQueue(Queue* queue);
int freeQueue(Queue* queue);

#endif //LAB1_ALGORITHM_QUEUE_H
