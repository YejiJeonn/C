#include <stdio.h>

int multi(int x);

int main(){
  int arr[3] = {4,2,6};
  
  for(int i=0; i<3; i++){
    multi(arr[i]);
    printf("%d ", arr[i]);
  }

  return 0;
}


int multi(int x){

  return x*2;
}
