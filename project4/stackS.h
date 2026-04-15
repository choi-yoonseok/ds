#pragma once
#define STACK_SIZE 100    // SIZe -> SIZE (대문자로 통일)

typedef int element;
extern element stack[STACK_SIZE]; // stac -> stack, extern 추가
extern int top;                  // top 변수 선언 누락 추가

int isStackEmpty();    // inStackEmpty -> isStackEmpty
int isStackFull();     // inStackFull -> isStackFull
void push(element item);
element pop();
element peek();
void printStack();