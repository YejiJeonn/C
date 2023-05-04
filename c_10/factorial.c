// 팩토리얼 구하기

#include <stdio.h>

int main(){
  int x, i, sum=1;

  printf("알고 싶은 팩토리얼의 값은? ");
  scanf("%d", &x);

  for(i=1; i<=x; i++){
    sum *= i;
  }

  printf("%d!의 값은 %d 입니다.\n", x, sum);

  return 0;
}

// sum을 0으로 초기화할 경우 팩토리얼값이 0이 나오므로 초기화할 때 1로 할 것
