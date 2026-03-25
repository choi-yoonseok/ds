#include <stdio.h>

unsigned long long fact(int n);

int main() {
    int n;
    unsigned long long result;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    result = fact(n);
    printf("%d의 팩토리얼 값은 %llu입니다.\n", n, result);

    return 0;
}

unsigned long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}