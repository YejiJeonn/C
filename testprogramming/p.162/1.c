#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
  //1. 실수형 변수 선언
  double n;
  //2. 실수 입력받음
  printf("실수를 입력하시오: ");
  scanf("%lf",&n);
  //3. 실수형식과 지수형식으로 출력
  printf("실수형식으로는 %f 입니다.\n",n);
  printf("지수형식으로는 %e 입니다.",n);
  //리턴 0
  return 0;
}
