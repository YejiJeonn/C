// 함수 생성 후 main에서 호출하기

#include <stdio.h>

// 값 입력받는 함수
int get_integer(void){
  int value;

  printf("정수를 입력하시오 : ");
  scanf("%d", &value);

  return value;
}

// 값 더하는 함수
int add(int x, int y){
  return x+y;
}

// main함수
int main(){
  int x,y;

  x = get_integer();
  y = get_integer();

  printf("두 수의 합 : %d\n", add(x,y));

  return 0;
}
