#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double x, y;

    printf("두 개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    printf("%f + %f = %f\n", x, y, x+y);
    printf("%f - %f = %f\n", x, y, x-y);
    printf("%f * %f = %f\n", x, y, x*y);
    printf("%f / %f = %f\n", x, y, x/y);

    return 0;
}
