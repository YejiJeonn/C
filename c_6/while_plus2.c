#include <stdio.h>

int main(){
  int n, i=0, sum=0;    //전역변수 => main이 유지되는 동안 메모리에 존재

  while(i<5){
    printf("값을 입력하시오: ");    //지역변수 => while 안에서만 선언할 경우 while 끝나면 메모리에서 지워짐
    scanf("%d",&n);

    sum += n;
    i++;
  }

  printf("합계는 %d 입니다.", sum);

  return 0;
}
