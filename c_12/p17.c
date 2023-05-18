//교안 p17_배열 사용 평균 구하기

#include <stdio.h>

int main(){
  int score[5];
  int sum;

  for(int i=0; i<5; i++){
    printf("학생들의 성적을 입력하시오 : ");
    scanf("%d", &score[i]);
    sum += score[i];
  } 

  printf("성적 평균 = %d\n", sum/5);

  return 0;
}
