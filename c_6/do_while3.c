#include <stdio.h>
#include <stdlib.h>

int main(){
  srand((unsigned)time(NULL));    //난수 추출을 위한 씨드함수 (시간은 계속 바뀌니까)
  int answer = rand() % 100;      //난수 선언
  int guess;
  int tries=0;

  do{
    printf("정답을 추측하시오: ");
    scanf("%d",&guess);
    tries++;
    if(guess < answer){
      printf("LOW\n");
    }
    if(guess > answer){
      printf("HIGH\n");
    }
  }while(guess != answer);      //guess와 answer이 같이 않다면(참이라면) 반복, 같다면(거짓) 탈출

  printf("%d회 도전 / 축하합니다.", tries);

  return 0;
}
