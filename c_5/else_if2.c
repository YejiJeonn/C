#include <stdio.h>

int main(){
  int a, b;

  printf("비교할 두 수를 입력하시오: ");
  scanf("%d %d", &a, &b);

  if(a > b){
    printf(">");
  }
  else if(a < b){
    printf("<");
  }
  else{
    printf("=");
  }

  return 0;
}
