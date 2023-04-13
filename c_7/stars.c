#define _CRT_NO_SECURE_WARRNINGS
#include <stdio.h>

//별 찍는 함수 선언
void print_stars(){
  for(int i=0; i<30; i++){
    printf("*");
  }
}

int main(){
  print_stars();
  printf("\nHELLO WORLD!\n");
  print_stars();
  printf("\n");

  return 0;
}
