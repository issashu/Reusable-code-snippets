#include <stdio.h>
#include <stdlib.h>
#include "queueOps.h"

struct qNode {
    char NodeValue;
    int row;
    int col;
    struct qNode *Next;
};

struct queue {
    struct qNode* front;
    struct qNode* back;
};

/*NODE OPERATIONS START HERE*/
qNode* NodeInit(char keyValue, int row, int col) {
    struct qNode *baseNode = (qNode*) malloc (sizeof(qNode));
    baseNode->NodeValue = keyValue;
    baseNode->row = row;
    baseNode->col = col;
    baseNode->Next = NULL;

    return baseNode;
}

char getValue(qNode *baseNode) {
    return baseNode->NodeValue;
}

int getRow(qNode *baseNode) {
    return baseNode->row;
}

int getCol(qNode *baseNode) {
    return baseNode->col;
}

void setValue(qNode *baseNode, char keyValue) {
    baseNode->NodeValue = keyValue;
}

void setRow(qNode *baseNode, int row) {
    baseNode->row = row;
}

void setCol(qNode *baseNode, int col) {
    baseNode->col = col;
}

/* QUEUE OPERATIONS START HERE*/
queue* QueueInit(){
    queue *baseQueue = (queue*) malloc (sizeof(queue));
    baseQueue->front = NULL;
    baseQueue->back = baseQueue->front;

    return baseQueue;
}

void Enqueue(queue *baseQueue, qNode *baseNode) {
    if (isEmpty(baseQueue)) {
        baseQueue->back = baseNode;
        baseQueue->front = baseNode;
    } 
    else{
        baseQueue->back->Next = baseNode;
        baseQueue->back = baseNode;
    }
}

void Dequeue(queue *baseQueue) {
    if (isEmpty(baseQueue)) {
        printf("The queue is empty. Nothing to de-queue!");
        return;
    }
    qNode *tempNode = baseQueue->front;
    baseQueue->front = baseQueue->front->Next;
    tempNode->Next = NULL;
    free(tempNode);
}

int8_t isEmpty(queue *baseQueue) {
    if (baseQueue->back==baseQueue->front) {
        return 1;
    }
    else{
        return 0;
    }
}

qNode* getFront(queue *baseQueue) {
    return baseQueue->front;
}

qNode* getBack(queue *baseQueue) {
    return baseQueue->back;
}

int getSize(queue *baseQueue) {
    int counter = 0;
    qNode *counterPtr = baseQueue->front;
    while(counterPtr != NULL) {
        counterPtr = counterPtr->Next;
        counter++;
    }

    return counter;
}
