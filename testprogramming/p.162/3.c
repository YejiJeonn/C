#include <stdio.h>

// x랑 y값 바꾸기
int main(){

  // 1. 변수 x, y, n 선언 n은 빈 창고
  // 2. x =10, y = 20 지정
  int x=10, y=20, n=0;
  printf("x = %d , y = %d\n",x,y);
  // 3. n = x, x = y, y = n 지정
  n = x;
  x = y;
  y = n;
  // 출력함수로 출력
  printf("x = %d , y = %d\n",x,y);
  // 리턴 0;
  return 0;
}
