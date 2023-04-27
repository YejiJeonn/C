#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    double sp = 300000;
    double lo = 149600000;
    double se=0;

    se = lo / sp;

    printf("빛의 속도는 %lf km/s\n", sp);
    printf("태양과 지구와의 거리 %lf km\n", lo);
    printf("도달 시간은 %lf초", se);

    return 0;
}
