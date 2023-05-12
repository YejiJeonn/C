// 70p ~ 71p 까지의 수학 라이브러리 함수 사용

#include <stdio.h>
#include <math.h>

int main(){
  double result, value = 1.6;
  float a1 = 12.0, a2 = -12.0;

  // floor :x보다 작지 않은 가장 작은 정수 --> 소숫점 내림
  result = floor(value);
  printf("%lf\n", result);
  
  // ceil : x보다 크지 않은 가장 큰 정수  --> 반올림
  result = ceil(value);
  printf("%lf\n", result);

  // fabs : 절대값
  printf("%2f의 절대값은 %2f\n", a1, fabs(a1));
  printf("%2f의 절대값은 %2f\n", a2, fabs(a2));

  // pow : n승, sqrt : 제곱근
  printf("10의 3승은 %.0f\n", pow(10.0, 3.0));
  printf("16의 제곱근은 %.0f\n", sqrt(16));


  return 0;
}
