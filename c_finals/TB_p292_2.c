// 교재 292쪽 도전문제(2)

#include <stdio.h>

int main(){
  int a, b;

  for(a=1; a<=6; a++){
    for(b=1; b<=6; b++){
      if((a<=b)&&(a+b==6)){
        printf("%d %d\n",a,b);
      }
    }
  }

  return 0;
}
