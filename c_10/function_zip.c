// 산술연산자 종류별로 함수 생성 후 main에서 호출
#include <stdio.h>

// 생성한 함수 원형 호출
int get_integer(void);
int add(int x, int y);
int minus(int x, int y);
int multi(int x, int y);
int div(int x, int y);

// main 합수
int main(){
  int x, y;

  x = get_integer();
  y = get_integer();

  printf("두 수의 합 : %d\n", add(x,y));
  printf("두 수의 차 : %d\n", minus(x,y));
  printf("두 수의 곱 : %d\n", multi(x,y));
  printf("두 수의 나눗셈 : %d\n", div(x,y));

  return 0;
}

// 정수 입력받는 함수
int get_integer(void){
  int value;

  printf("정수를 입력하세요 : ");
  scanf("%d", &value);

  return value;
}

// 덧셈 함수
int add(int x, int y){
  return x+y;
}

// 뺄셈 함수
int minus(int x, int y){
  return x-y;
}

// 곱셈 함수
int multi(int x, int y){
  return x*y;
}

// 나눗셈 함수
int div(int x, int y){
  return x/y;
}
