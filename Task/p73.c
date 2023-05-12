// 삼각 함수 라이브러리 (sin, cos 사용)

#include <stdio.h>
#include <math.h>

// 사인, 코사인값을 구하는 함수 사용
int main(){
  double pi = 3.1415926535;
  double x, y;

  x = pi/2;

  // 사인값 출력
  y = sin(x);
  printf("sin(%f) = %f\n", x, y);
  
  // 코사인 값 출력
  y = cos(x);
  printf("cos(%f) = %f\n", x, y);

  return 0;
}
