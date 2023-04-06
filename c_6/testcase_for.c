//더하기 반복문 _ for문
#include <stdio.h>

int main(){
  int i, n, a=0, b=0;

  printf("반복할 횟수를 입력하시오: ");
  scanf("%d",&n);

  for(i=0; i<n; i++){
    scanf ("%d %d", &a, &b);
    printf("%d\n", a+b);
  }

  return 0;
}
