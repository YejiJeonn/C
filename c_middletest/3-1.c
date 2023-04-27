#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double x,y,z;
    double sum;

    printf("3개의 실수를 입력하시오: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    sum = x+y+z;
    printf("합계 = %.2lf\n", sum);
    printf("평균 = %.2lf", sum/3);

    return 0;
}
