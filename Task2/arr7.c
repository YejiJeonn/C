// 배열을 이용한 제곱근 구하기

#include <stdio.h>

int main(){
  int arr[5];
  int arr2[5];

  for(int i=0; i<5; i++){
    scanf("%d", &arr[i]);
    arr2[i] = arr[i] * arr[i];
  }

  for(int i=0; i<5; i++){
    printf("%d ", arr2[i]);
  }

  return 0;
}

