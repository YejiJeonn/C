//testcase_for 파일에서 출력형식 응용

#include <stdio.h>

int main(){
  int a=0, b=0, i, n;

  printf("반복할 횟수를 입력하시오: ");
  scanf("%d",&n);

  for(i=1; i<=n; i++){
    scanf("%d %d",&a, &b);
    printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
  }

  return 0;
}
