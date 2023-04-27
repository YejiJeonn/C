#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_per 60

int main(){
    int input, minute, second;

    printf("초를 입력하시오: ");
    scanf("%d", &input);

    minute = input/SEC_per;
    second = input%SEC_per;
    printf("%d초는 %d분 %d초 입니다.\n", input, minute, second);

    return 0;
}
