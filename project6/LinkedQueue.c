#include <stdio.h>
#include <stdlib.h>
#include "LinkedQueue.h"

// 1. LQueueType으로 대소문자 수정
LQueueType* createLinkedQueue() {
    LQueueType* LQ;
    LQ = (LQueueType*)malloc(sizeof(LQueueType));
    LQ -> front = NULL;
    LQ -> rear = NULL;
    return LQ;
}

int isLQEmpty(LQueueType* LQ) {
    if (LQ->front == NULL) {
        // printf(" Linked Queue is empty! "); // 출력문은 선택사항
        return 1;
    }
    else return 0;
}

void enLQueue(LQueueType* LQ, element item) {
    QNode* newNode = (QNode*)malloc(sizeof(QNode));
    newNode->data = item;
    newNode->link = NULL;
    if (LQ->front == NULL) {
        LQ->front = newNode;
        LQ->rear = newNode;
    }
    else {
        LQ->rear->link = newNode;
        LQ->rear = newNode;
    }
}

element deLQueue(LQueueType* LQ) {
    QNode* old = LQ->front;
    element item;
    if (isLQEmpty(LQ)) return 0; // 2. return 뒤에 0 추가
    else {
        item = old->data;
        LQ->front = LQ->front->link;
        if (LQ->front == NULL)
            LQ->rear = NULL;
        free(old);
        return item;
    }
}

element peekLQ(LQueueType* LQ) {
    if (isLQEmpty(LQ)) return 0; // 3. return 뒤에 0 추가
    else {
        return LQ->front->data;
    }
}

void printLQ(LQueueType* LQ) {
    QNode* temp = LQ->front;
    printf(" Linked Queue : [");
    while (temp) {
        printf("%3c", temp->data);
        temp = temp->link;
    }
    printf(" ]\n"); // 가독성을 위해 \n 추가
}