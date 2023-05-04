// for문을 이용한 팩토리얼 구하기

#include <stdio.h>

// 팩토리얼 함수
int factorial(int n){
  int sum =1, i;

  for(i=1; i<=n; i++){
    sum *= i;
  }

  return sum;
}

int main(){
  int x, i;

  printf("알고 싶은 팩토리얼의 값은? ");
  scanf("%d", &x);

  printf("%d!의 값은 %d 입니다.\n", x, factorial(x));

  return 0;
}

// for문에서 i를 0으로 초기화하거나 sum을 0으로 초기화할 경우 팩토리얼값이 0이 나오므로 초기화할 때 1로 할 것
