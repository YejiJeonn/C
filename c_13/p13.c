#include <stdio.h>

int main(){
  int i = 10;
  double f = 12.3;
  int *pi = NULL;
  double *pf = NULL;

  pi = &i;
  pf = &f;

  pi++;

  printf("%p %p \n", pi, &i);
  printf("%p %p \n", pf, &f);

  return 0;
}
