#include <stdio.h>

int main(){
  //1. double형 변수 a,b,c 선언
  double a,b,c;

  //2. 값 3개 실수형으로 입력받기
  printf("상자의 가로 세로 높이를 한번에 입력 : ");
  scanf("%lf %lf %lf", &a, &b, &c);

  //3. 상자의 부피는 (a*b*c)입니다 출력
  printf("상자의 부피는 %f 입니다.",a*b*c);

  //리턴 0
  return 0;
}
