#include <stdio.h>

int main(){
  int i=10;
  int *p = &i;

  printf("*p : %d  ||  i : %d\n", *p, i);

  *p = 7;

  printf("=> *p=n으로 값 변환 후\n *p : %d  ||  i : %d\n", *p, i);
  
  return 0;
}
