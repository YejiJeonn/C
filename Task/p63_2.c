// 자동차 게임 --> upgrade 자동차 3개로 늘리기

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void distance(int num, int c_distance);

int main(){
  int i;
  int car1=0, car2=0, car3=0;         // 자동차 변수 3개 생성
  srand((unsigned)time(NULL));        // 난수 발생을 위한 시드

  for(i=0; i<6; i++){
    car1 += rand()%100;               // 자동차 1에 0~99까지의 수 6번 누적
    car2 += rand()%100;               // 자동차 2에 0~99까지의 수 6번 누적
    car3 += rand()%100;               // 자동차 3에 0~99까지의 수 6번 누적

    distance(1, car1);                // distance함수에 순서를 뜻하는 수, 누적된 난수값 매개변수로 주고 실행
    distance(2, car2);
    distance(3, car3);
    printf("--------------------- %d\n", i);      // 구분선 + 몇 번째 반복인지 숫자 표시
    getcahr();                        // enter키 누르면 다음 반복 실행되도록 제어
  }

  return 0;
}


void distance(int num, int c_distance){
  int i;

  printf("CAR #%d : ", num);            // 몇번째 자동차인지 숫자 표현
  for(i=0; i<c_distance/10; i++){       // i = 0부터 입력받은 난수/10한 값까지 별 출력 => 거리 측정을 위한 별 반복찍기
    printf("*");
  }
  printf("\n");

}
