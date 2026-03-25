#include <stdio.h>

int main() {
    char* ptrArray[2];
    char** ptrptr;
    int i;

    ptrArray[0] = "Korea";
    ptrArray[1] = "Seoul";

    ptrptr = ptrArray;

    printf("\nptrArray[0] 주소 = %p", (void *)&ptrArray[0]);
    printf("\nptrArray[0] 값 = %p", (void *)ptrArray[0]);
    printf("\nptrArray[0] 참조값 = %c", *ptrArray[0]);
    printf("\nptrArray[0] 문자열 = %s\n", ptrArray[0]);

    printf("\nptrArray[1] 주소 = %p", (void *)&ptrArray[1]);
    printf("\nptrArray[1] 값 = %p", (void *)ptrArray[1]);
    printf("\nptrArray[1] 참조값 = %c", *ptrArray[1]);
    printf("\nptrArray[1] 문자열 = %s\n", ptrArray[1]);

    printf("\nptrptr 주소 = %p", (void *)&ptrptr);
    printf("\nptrptr 값 = %p", (void *)ptrptr);
    printf("\nptrptr 1차 참조값 = %p", (void *)*ptrptr);
    printf("\nptrptr 2차 참조값 = %c", **ptrptr);
    printf("\nptrptr 2차 참조문자열 = %s\n", *ptrptr);

    printf("\n*ptrArray[0] : ");
    for (i = 0; i < 5; i++)
        printf("%c", *(ptrArray[0] + i));

    printf("\n**ptrptr : ");
    for (i = 0; i < 5; i++)
        printf("%c", *(*ptrptr + i));

    printf("\n*ptrArray[1] : ");
    for (i = 0; i < 5; i++)
        printf("%c", *(ptrArray[1] + i));

    printf("\n**(ptrptr+1) : ");
    for (i = 0; i < 5; i++)
        printf("%c", *(*(ptrptr + 1) + i));

    printf("\n");

    return 0;
}