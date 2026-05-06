#include <stdio.h>

int main(void) {
    int n;
    printf("몇 단을 출력하지 입력하시오 : ");
    scanf("%d",&n);
    for (int i = 1; i < 10; i++) {
        printf("%d x %i = %d\n",n,i,n*i);
    }
    return 0;
}