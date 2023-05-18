// 동전 던지기 게임 _ rand()

#include <stdio.h>
#include <stdlib.h> // rand() 함수가 들어있는 라이브러리
#include <time.h>   // 시간 호출 라이브러리 _ rand() 함수의 시드

int coin();   // 함수의 원형 _ rand함수가 들어있음

int main(){
  int head = 0;   // 동전의 앞면
  int tail = 0;   // 동전의 뒷면
  srand((unsigned)time(NULL));    // rand()의 시드(time) 호출

  for(int i=0; i<100; i++){   // 동전 던지기 100번 반복문
    if(coin()==1){            // coin()함수 값이 1일 때를 앞면으로
      head++;                 // coin()함수 값 1나올 때 head변수 1씩 증가
    }
    else{
      tail++;                 // coin()함수 0 나올 때 tail변수 1씩 증가
    }
  }

    printf("동전의 앞면 : %d\n동전의 뒷면 : %d\n", head, tail);

  return 0;
}

int coin(){                 // 동전 던지기 함수
  int num = rand()%2;       // 변수 num에 rand()로 나오는 수를 2로 나눈 나머지 (0 or 1)

  return num;               // num값 반환
}
