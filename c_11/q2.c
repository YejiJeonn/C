// 회원 등급에 따라 할인율을 적용한 금액을 출력하는 매개함수

#include <stdio.h>

int solution(int pri, char grad);

int main(){
  int price, result;
  char grade;

  price = 2500;
  grade = 'V';

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
  //else{
  //  printf("입력값이 잘못되었습니다.");
  //}

  return answer;
}
