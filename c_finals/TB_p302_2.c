// 교재 302쪽 도전문제

// 교재 302쪽 LAB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int x, y, z, ans1, ans2;
  int corr=0, non=0;
  srand((unsigned)time(NULL));

  for(int i=0; i<10; i++){
    x = rand()%10;
    y = rand()%10;
    z = rand()%3;

    switch(z){
      case 0:
        printf("%d + %d = ", x, y);
        ans1 = x + y;
        scanf("%d", &ans2);
        break;

      case 1:
        printf("%d - %d = ", x, y);
        ans1 = x - y;
        scanf("%d", &ans2);
        break;

      case 2:
        printf("%d * %d = ", x, y);
        ans1 = x * y;
        scanf("%d", &ans2);
        break;

      case 3:
        printf("%d / %d = ", x, y);
        ans1 = x / y;
        scanf("%d", &ans2);
        break;
      
      default :
        printf("오류");
        break;
    }

    
    if(ans1 == ans2){
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
