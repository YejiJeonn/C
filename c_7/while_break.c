#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main(){
  //1. 변수 A,B  선언
  int A, B, sum;

  //2. 정수 A, B 입력받음
  //3. 0과 0이 입력될 때까지 돌아가는 반복문
  while (1)
  {
    scanf("%d %d",&A, &B);
    if(A==0 && B==0){
      break;
    }
    sum = A + B;
    printf("%d + %d = %d\n",A,B,sum);
  }
  
  //리턴 0
  return 0;
}
