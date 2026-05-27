#pragma once
typedef int element;

typedef struct  stackNode {
    element data;
    struct stackNode* link;
} stackNode;

static stackNode* top; 

int isStackEmpty();
void push(element item);
element pop();
element peek();
void printStack();