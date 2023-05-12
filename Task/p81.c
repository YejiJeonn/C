// sin함수 그래프를 90도 회전해서 출력

#include <stdio.h>
#include <math.h>

#define PI 3.141592     // 기호상수 PI 선언


// 함수 원형 선언
double rad(double degree);
void draw_bar(int height);


int main(){
  int degree, x, y;
  for(degree=10; degree<=180; degree+=10){      // 교안: dgree를 90까지 설정 => 반만 출력됨 , dgree를 180까지 설정 => sin 그래프 출력됨

    // rad가 반지름 * 각도 => 값이 double로 나오기 때문에 rad()에 넣는 매개변수도 double형으로 변환해서 계산
    // int형으로 변환 => (60 * rad를 sin한거 + 0.5)
    y = (int)(60 * sin(rad((double)degree)) + 0.5);

    // degree가 10씩 증가할 때마다 y의 값이 변환 --> 이때마다 draw_bar() 호출하면 y만큼 별찍기s
    draw_bar(y);
  }

  return 0;
}


// (반지름 * 각도) / 180
double rad(double degree){
  return PI * degree / 180.0;           // 기호상수 PI * 각도
}


// 그래프 그리는 함수
void draw_bar(int height){

  for(int i=0; i<height; i++){
    printf("*");
  }
  printf("\n");
}
