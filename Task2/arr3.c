// 배열 짝수자리에는 짝수, 홀수자리에는 홀수 위치하도록

#include <stdio.h>

int main(){
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int arr2[10];

  for(int i=0; i<10; i++){
    if(i%2==0){
      arr2[i] = arr[i+1];
    }
    else if(i%2 != 0){
      arr2[i] = arr[i-1];
    }
  }

  for(int i=0; i<10; i++){
    printf("%d ", arr2[i]);
  }
  
  return 0;
}
