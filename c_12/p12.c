// 배열 예제

#include <stdio.h>

int main(){
  int arr[5];

  for(int i=1; i<=5; i++){
    arr[i-1] = i*10;
    printf("arr[%d] = %d\n", i-1, arr[i-1]);
  }

  return 0;
}
