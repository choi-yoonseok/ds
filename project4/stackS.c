#include <stdio.h>
#include <stdlib.h>  // exit() 함수 사용을 위해 필수
#include "stackS.h"

// 변수 실제 정의 (정의가 없으면 'undefined reference' 에러 발생)
element stack[STACK_SIZE]; 
int top = -1;

// 스택이 비어있는지 확인
int isStackEmpty() {
    if (top == -1) return 1;
    else return 0;
}

// 스택이 가득 찼는지 확인
int isStackFull() {
    if (top == STACK_SIZE - 1) return 1;
    else return 0;
}

// 스택에 원소 삽입
void push(element item) {
    if (isStackFull()) {
        printf("\n\n Stack is FULL! \n");
        return;
    }
    else stack[++top] = item;
}

// 스택에서 원소 삭제 및 반환
element pop() {
    if (isStackEmpty()) {
        printf("\n\n Stack is Empty!! \n");
        return 0;
    }
    else return stack[top--];
}

// 스택의 top 원소 확인
element peek() {
    if (isStackEmpty()) {
        printf("\n\n Stack is Empty!! \n");
        exit(1); // 에러 발생 시 프로그램 종료
    }
    else return stack[top];
}

// 스택 내용 출력
void printStack() {
    int i;
    printf("\n STACK [ ");
    for (i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("]");
}