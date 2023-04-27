#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int price, money, num, change1, change2, change3;

    printf("물건 값을 입력하시오: ");
    scanf("%d", &price);
    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &money);
    printf("거스름돈은 다음과 같습니다.\n\n");

    num = money - price;
    change1 = num / 1000;
    printf("천원권 : %d장\n", change1);

    num = num-(change1*1000);
    change2 = num / 500;
    printf("오백원 동전 : %d개\n", change2);
    
    num = num - (change2*500);
    change3 = num / 100;
    printf("백원 동전 : %d개\n", change3);

    return 0;
}
