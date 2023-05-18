// 배열의 size를 이용해서 값을 출력하는 코드(sizeof 사용)

#include <stdio.h>

int main(){
  int score[] = {1, 2, 3, 4, 5, 6};
  int size;

  size = sizeof(score) / sizeof(score[0]);

  for(int i=0; i<size; i++){
    printf("%d\n", score[i]);
  }

  return 0;
}
