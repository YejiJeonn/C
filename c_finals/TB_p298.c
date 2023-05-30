// 교재 298쪽 LAB

#include <stdio.h>

int main(){
  int n;
  double divisor=1.0, divident=4.0, sum=0.0;      // divisor : 분모 , divident = 분자

  printf("반복 횟수 : ");
  scanf("%d", &n);

  while(n>0){
    sum += divident/divisor;
    divident *= -1.0;
    divisor += 2;

    n--;
  }
  
  printf("%f\n", sum);


  return 0;
}
