// 배열의 위치 바꾸기

#include <stdio.h>

int main(){
  int arr[] = {3,1,2,5,4};
  int n, m, temp=0;
  scanf("%d %d", &n, &m);

  temp = arr[n-1];
  arr[n-1] = arr[m-1];
  arr[m-1] = temp;

  for(int i=0; i<5; i++){
    printf("%d  ", arr[i]);
  }

  return 0;
}

