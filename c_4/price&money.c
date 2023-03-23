#include <stdio.h>

int main(){
  int price, money, sum, result;

  printf("물건 값을 입력하시오: ");
  scanf("%d",&price);

  printf("투입한 금액을 입력하시오: ");
  scanf("%d",&money);

  printf("거스름돈은 다음과 같습니다.\n\n");

  sum = money - price;
  result = sum / 1000;
  printf("천원권: %d장\n",result);
  
  sum = sum % 1000;
  result = sum / 500;
  printf("오백원 동전: %d개\n",result);

  sum = sum % 500;
  result = sum / 100;
  printf("백원 동전: %d개\n",result);

  return 0;
}
