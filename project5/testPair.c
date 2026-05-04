#include <stdio.h>
#include <string.h>
#include "stackL.h"
#include "testPair.h"

int testPair(char* exp) {
    char symbol, open_pair;
    int i, length = strlen(exp);
    top = NULL;

    for (i = 0; i < length; i++) {
        symbol = exp[i];
        switch (symbol) {
            case '(':
            case '[':
            case '{':
                push(symbol); 
                break;
            case ')':
            case ']':
            case '}':
                if (isStackEmpty()) return 0;
                else {
                    open_pair = pop();
                    if ((open_pair == '(' && symbol != ')') ||
                        (open_pair == '[' && symbol != ']') ||
                        (open_pair == '{' && symbol != '}')) {
                        return 0;
                    }
                    else break;
                }
        } // switch 끝
    } // for 끝

    if (top == NULL) return 1;
    else return 0;
} // 함수 끝 (이 괄호가 빠졌을 확률이 높습니다!)