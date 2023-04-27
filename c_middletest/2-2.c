#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int x, y;

    printf("첫 번째 숫자를 입력하시오: ");
    scanf("%d", &x);
    printf("두 번째 숫자를 입력하시오: ");
    scanf("%d", &y);

    printf("두 수의 합: %d\n", x+y);

    return 0;
}
