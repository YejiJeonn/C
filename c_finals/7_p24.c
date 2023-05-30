 // max 함수 선언 -> 입력 값 중 더 큰 값 찾기

#include <stdio.h>


int max(int x, int y){
  if(x>y){
    return x;
  }
  else if(x<y){
    return y;
  }
  else{
    return 0;
  }
}


int main(){
  int x, y;

  printf("2개의 정수를 입력하세요 : ");
  scanf("%d %d", &x, &y);

  if(max(x, y) == 0){
    printf("수를 잘못 입력하셨습니다.\n");
  }
  else{
    printf("더 큰 값은 %d 입니다.\n", max(x, y));
  }

  return 0;
}
