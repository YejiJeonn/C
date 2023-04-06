//do-while문 응용1

#include <stdio.h>

int main(){
  int i=0;

  do{
    printf("1---새로만들기\n");
    printf("2---파일열기\n");
    printf("3---파일닫기\n");
    printf("하나를 선택하세요.\n");

    scanf("%d",&i);
  }while(i<1 || i>3);
  
  if(i==1){
    printf("선택된 메뉴는 1---새로만들기 입니다.\n");
  }
  else if(i==2){
    printf("선택된 메뉴는 2---파일열기 입니다.\n");
  }
  else{
    printf("선택된 메뉴는 3---파일닫기 입니다.\n");
  }

  return 0;
}
