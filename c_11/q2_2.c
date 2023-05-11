// q2를 값 입력받아서 수행하도록 수정한 코드

#include <stdio.h>

int solution(int pri, char grad);

int main(){
  int price, result;
  char grade;

  printf("회원 등급을 입력하세요(대문자): ");
  scanf("%c", &grade);

  printf("급액을 입력하세요: ");
  scanf("%d", &price);


  result = solution(price, grade);

  printf("할인이 적용된 값: %d\n", result);

  return 0;
}

int solution(int price, char grade){
  int answer;

  if(grade == 'G'){
    answer = price * 0.95;
  }
  if(grade == 'S'){
    answer = price * 0.9;
  }
  if(grade == 'V'){
    answer = price * 0.85;
  }
  //if{
  //  printf("입력값이 잘못되었습니다.");
  //}

  return answer;
}
