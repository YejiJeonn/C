// 교재 302쪽 LAB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int x, y, ans;
  int corr=0, non=0;
  srand((unsigned)time(NULL));

  for(int i=0; i<10; i++){
    x = rand()%10;
    y = rand()%10;
    printf("%d + %d = ", x, y);
    scanf("%d", &ans);

    if(x+y == ans){
      printf("맞았습니다.\n\n");
      corr++;
    }
    else{
      printf("틀렸습니다.\n\n");
      non++;
    }
  }

  printf("맞은 문제 : %d개\n틀린 문제 : %d개\n", corr, non);

  return 0;
}
