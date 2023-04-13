#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//조건식 삼항연산자 함수

//두 수를 비교하여 더 큰 값을 찾아내는 함수
int max(int x, int y){
  return (x > y) ? x:y;
}

//함수 max를 사용하는 main함수
int main(){
  int x, y, larger;

  printf("정수 2개 입력하시오: ");
  scanf("%d %d", &x, &y);

  larger = max(x,y);

  printf("더 큰 값은 %d 입니다.\n", larger);

  return 0;
}
