// 함수 만들어서 main에서 출력하기

#include <stdio.h>

int get_integer(void){
  int value;

  printf("정수를 입력하시오 : ");
  scanf("%d", &value);

  return value;
}

int add(int x, int y){
  return x+y;
}


int main(){
  int x,y;

  x = get_integer();
  y = get_integer();

  printf("두 수의 합 : %d\n", add(x,y));

  return 0;
}
