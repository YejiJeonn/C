// 교재 292쪽 LAB + 도전문제(1)

# include <stdio.h>

int main(){
  int a, b, c;

  for(a=1; a<=100; a++){
    for(b=1; b<=100; b++){
      for(c=1; c<=100; c++){
        // a<b 조건을 삽입해서 중복되는 항목을 제거함
        if((a<b)&&((a*a+b*b) == c*c)){
          printf("%d %d %d\n", a, b, c);
        }
      }
    }
  }


  return 0;
}
