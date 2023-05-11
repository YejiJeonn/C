// 입력한 수까지 중 소수를 구하는 코드 _ 함수.ver

#include <stdio.h>

int get_integer();
int Solution(int n);

int main(){
  int x;

  x = get_integer();

  Solution(x);


  return 0;
}

int get_integer(){
  int n;

  printf("수를 입력하세요: ");
  scanf("%d", &n);

  return n;
}

int Solution(int n){
  int i, j, count=0;

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
