#include <stdio.h>

int main(){
  int i=0;

  do{
    printf("1---새로만들기\n");
    printf("2---파일열기\n");
    printf("3---파일닫기\n");
    printf("4---종료");
    printf("하나를 선택하세요.\n");

    scanf("%d",&i);
  }while(i != 4);

  printf("종료되었습니다.");

  return 0;
}
