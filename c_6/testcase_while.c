//더하기 반복문 _ while 이용

#include <stdio.h>

int main(){
  int i=1, n, a=0, b=0;

  printf("반복할 횟수를 입력하시오: ");
  scanf("%d",&n);

  while(i<=n){
    scanf("%d %d", &a, &b);
    printf("%d\n",a+b);
    i++;
  }

  return 0;
}
