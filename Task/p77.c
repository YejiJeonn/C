// 숫자 맞추기 게임 --> time(NULL) 사용

#include <stdio.h>
#include <time.h>

int main(){
  time_t start, end;      // time_t는 unsigned long과 동일함
  
  start = time(NULL);
  printf("10초가 되면 엔터키를 누르세요.\n");
 
  while(1){                 // while조건을 참으로 넣어 계속 반복되도록
    if (getchar()){         // 만약 어떤 char가 들어온다면(= 아무 키나 누른다면)
      break;                // 가장 가까운 반복문(=while) 탈출
    }
  }
  printf("종료되었습니다.\n");

  end = time(NULL);
  printf("경과된 시간은 %ld초 입니다.\n", end-start);       // unsigned long과 같은 형식 --> 출력 %ld 형식으로

  return 0;
}
