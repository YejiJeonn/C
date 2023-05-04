// 재귀함수를 이용한 팩토리얼 구하기

#include <stdio.h>

// 재귀함수를 넣은 팩토리얼
int factorial(int n){

  if(n==1){
    return 1;
  }
  else{
    return n * factorial(n-1);
  }

}

// main함수, 팩토리얼 함수 호출해서 결과 출력
int main(){
  int n;

  printf("팩토리얼 : ");
  scanf("%d", &n);

  printf("%d!의 값 : %d\n", n, factorial(n));

  return 0;
}
