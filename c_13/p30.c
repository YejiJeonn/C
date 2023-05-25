// 자료형에 따라 1의 단위가 다르다
// char형 포인터 값 +1 = +1
// int형 포인터 값 +1 = +4
// double형 포인터 값 +1 = +8

#include <stdio.h>

int main(){
  char *pc;
  int *pi;
  double *pd;

  pc = (char*)10000;
  pi = (int*)10000;
  pd = (double*)10000;

  printf("pc = %u, pc+1 = %u, pc+2 = %u\n", pc, pc+1, pc+2);
  printf("pi = %u, pi+1 = %u, pi+2 = %u\n", pi, pi+1, pi+2);
  printf("pd = %u, pd+1 = %u, pd+2 = %u\n", pd, pd+1, pd+2);

  return 0;
}
