//더하기 반복문 _ do while문

#include <stdio.h>

int main(){
  int i=0, n, a=0, b=0;

  printf("반복할 횟수를 입력하시오: ");
  scanf("%d",&n);

  do{
    scanf("%d %d", &a, &b);
    printf("%d\n",a+b);
    i++;
  }while(i != 5);

  return 0;
}
