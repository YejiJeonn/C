#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    float x;
    double result;

    printf("반지름을 입력하시오: ");
    scanf("%f", &x);

    result = x*x*3.14;
    printf("원의 면적: %lf", result);

    return 0;
}
