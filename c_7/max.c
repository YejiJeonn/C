#define _CRT_NO_SECURE_WARRNINGS
#include <stdio.h>

//max함수 선언
int max(int a,int b){
  if(a > b){
   return a;
  }
  else{
    return b;
  }  
}

int main(void){
  int a=10, b=20;
  printf("%d", max(a,b));
  return 0;
}
