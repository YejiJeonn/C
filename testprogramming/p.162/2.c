#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

  // 1. 16진수 변수 선언
  int n;

  // 2. 변수에 16진수를 정수로 입력받기
  printf("16진수 정수를 입력하시오 : ");
  scanf("%x", &n);

  // 3. 8진수, 10진수, 16진수로 출력하기
  printf("8진수로는 %#o 입니다.\n", n);
  printf("10진수로는 %d 입니다.\n", n);
  printf("16진수로는 %#x 입니다.", n);
  
  //리턴 0
  return 0;
}
