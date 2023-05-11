// 입력한 수까지 중 소수를 구하는 코드

#include <stdio.h>

int main(){
  int i, j;
  int n, count=0;

  printf("수를 입력하세요: ");
  scanf("%d", &n);

  printf("%d까지의 수 중에 소수인 수는 다음과 같습니다.\n", n);

  for(i=1; i<=n; i++){
    for(j=1; j<=i; j++){
      if(i%j==0){
        count++;
      }
    }
    if(count==2){
      printf("%d ",i);
    }
    count = 0;
  }
  printf("\n");

  return 0;
}
