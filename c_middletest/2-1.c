#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int x=20, y=10;
    int sum, diff, mul, div;

    sum = x+y;
    diff = x-y;
    mul = x*y;
    div = x/y;

    printf("두 수의 합 : %d\n", sum);
    printf("두 수의 차 : %d\n", diff);
    printf("두 수의 곱 : %d\n",mul);
    printf("두 수의 몫 : %d", div);

    return 0;
}
