#include <stdio.h>

int main(){
  int n, i=1, sum=0;

  printf("정수를 입력하시오 : ");
  scanf("%d",&n);

  while(i<=n){
    sum +=i;
    i++;
  }

  printf("1부터 %d까지의 합은 %d 입니다.", n, sum);
  
  return 0;
}
