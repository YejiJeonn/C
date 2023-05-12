// 자동차 게임 (난수 이용한 주행거리)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void disp_car(int car_number, int distance);

int main(){
  int i;
  int car1_dist=0, car2_dist=0;   // 주행시간(난수) 저장할 변수 선언      *주의 : 초기화 안하면 무한반복됨
  srand((unsigned)time(NULL));
  
  for(i=0; i<6; i++){             // 자동차
    car1_dist += rand()%100;      // 주행시간을 위한 랜덤함수 사용, 난수가 0~99까지만 출력되도록 설정
    car2_dist += rand()%100;      // 거리가 누적되어야 하기 때문에 +=(할당연산자) 사용
    disp_car(1, car1_dist);       // disp_car함수 호출, car 번호와 주행시간 난수를 매개변수로
    disp_car(2, car2_dist);
    printf("-------------------\n");
    // _getch();  -->  macOS에서는 <conio.h> 라이브러리 사용 불가
    getchar();                    // _getch() 대신 사용하여 엔터키 누르면 다음 내용 나올 수 있도록(time.h 라이브러리에 있음)
  }


  return 0;
}


// 차의 주행거리를 계산하는 함수 (차번호, 주행시간)
void disp_car(int car_number, int distance){
  int i;

  printf("CAR #%d: ", car_number);
  
  for(i=0; i<distance/10; i++){           // distance/10 = 0~9중 하나
    printf("*");                          // distance에는 main에서 난수 출력한 수(0~99)가 들어가있음, 10으로 나누어서 0~9중 사용하도록
  }
  printf("\n");
}
