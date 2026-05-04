#include <stdio.h>
#include <stdlib.h>
#include "queueS.h" // 또는 cQueueS.h (헤더 파일명 확인 필요)

// 원형 큐를 생성하는 연산
QueueType* createCQueue() {
    QueueType* Q = (QueueType*)malloc(sizeof(QueueType));
    Q->front = 0;  // 원형 큐는 0부터 시작
    Q->rear = 0;   
    return Q;
}

// 원형 큐가 공백인지 검사
int isCQueueEmpty(QueueType* Q) {
    return (Q->front == Q->rear);
}

// 원형 큐가 포화인지 검사
int isCQueueFull(QueueType* Q) {
    return (((Q->rear + 1) % Q_SIZE) == Q->front);
}

// 원형 큐 삽입 (enCQueue)
void enCQueue(QueueType* Q, element item) {
    if (isCQueueFull(Q)) {
        printf(" Queue is full! \n");
    } else {
        Q->rear = (Q->rear + 1) % Q_SIZE;
        Q->queue[Q->rear] = item;
    }
}

// 원형 큐 삭제 (deCQueue)
element deCQueue(QueueType* Q) {
    if (isCQueueEmpty(Q)) {
        return 0; 
    } else {
        Q->front = (Q->front + 1) % Q_SIZE;
        return Q->queue[Q->front];
    }
}

// 원형 큐 원소 출력 (printCQ)
void printCQ(QueueType* Q) {
    int i, first, last;
    first = (Q->front + 1) % Q_SIZE;
    last = (Q->rear + 1) % Q_SIZE;
    printf(" Queue : [");
    i = first;
    while (i != last) {
        printf("%3c", Q->queue[i]);
        i = (i + 1) % Q_SIZE;
    }
    printf(" ]");
}

// 원형 큐의 첫 번째 원소를 반환하는 연산
element peekCQ(QueueType* Q) {
    if (isCQueueEmpty(Q)) {
        return 0; // 공백 상태이면 0 반환
    } else {
        // front 다음 칸이 실제 첫 번째 데이터의 위치입니다.
        return Q->queue[(Q->front + 1) % Q_SIZE];
    }
}