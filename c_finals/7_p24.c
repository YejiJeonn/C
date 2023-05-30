 // max 함수 선언 -> 입력 값 중 더 큰 값 찾기

#include <stdio.h>

// max 함수
int max(int x, int y){
  if(x>y){            // x가 y보다 클 경우
    return x;
  }
  else if(x<y){       // y가 x보다 클 경우
    return y;
  }
  else{               // x와 y가 같을 경우
    return 0;
  }
}


int main(){
  int x, y;

  printf("2개의 정수를 입력하세요 : ");
  scanf("%d %d", &x, &y);
  
  if(max(x, y) == 0){                     // max 함수의 리턴 값이 0일경우 == x와 y에 같은 값을 입력한 경우
    printf("수를 잘못 입력하셨습니다.\n");
  }
  else{                                   // 정상적으로 처리됐을 경우
    printf("더 큰 값은 %d 입니다.\n", max(x, y));
  }

  return 0;
}
