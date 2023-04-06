#include <stdio.h>

int main(){
  int n, i=0, sum=0;

  while(i<5){
    printf("값을 입력하시오: ");
    scanf("%d",&n);

    sum += n;
    i++;
  }

  printf("합계는 %d 입니다.", sum);

  return 0;
}
