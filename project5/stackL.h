#pragma once
typedef char element;

typedef struct stackNode {
    element data;
    struct stackNode* link;
} stackNode;

// 수정 전: stackNode* top;
// 수정 후:
extern stackNode* top; // "top이라는 변수가 어딘가에 있으니 같이 쓰자"라는 약속

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();