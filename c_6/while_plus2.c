#include <stdio.h>

int main(){
  int n, i=0, sum=0;    //전역변수 => main이 유지되는 동안 메모리에 존재

  while(i<5){
    printf("값을 입력하시오: ");    //지역변수 => while 안에서만 선언할 경우 while 끝나면 메모리에서 지워짐
    scanf("%d",&n);                //이 경우 while 안에서 선언할 경우 조건문이 반복되면서 sum값이 초기화됨 -> 여기에서는 옳은 선언이 아님 
                                   //여기에서 n의 값은 계속 변하기 때문에 while 안에서 선언 사용 가능 (반복값이 많으면 효율성 떨어짐)
    sum += n;                      //n값이 계속 초기화 시켜줘야하는 문제라면 지역변수로 선언
    i++;
  }

  printf("합계는 %d 입니다.", sum);

  return 0;
}
