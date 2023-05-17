// 공학용 계산기 프로그램 작성

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int menu();
int factorial();
int sine();
int loge();
int sqrte();
int nPr();
int nCr();


// 순열 함수를 위한 전역변수 선언
int dep[20];
//bool visited_npr[20];
int npr;

//조합 함수를 위한 전역변수 선언
int arr[20];
bool visited_ncr[20];
int ncr, M;

// 메뉴 출력 후 선택되는 값에 따라 함수 호출
int main(){

  while(1){
    switch (menu()){
      // 1. 팩토리얼
      case 1:
        factorial();
        break;

      // 2. 사인
      case 2:
        sine();
        break;
      
      // 3. 로그
      case 3: 
        loge();
        break;
      
      // 4. 제곱근
      case 4:
        sqrte();
        break;
      
      // 5. 순열
      //case 5:
        //nPr();
        //break;

      // 6. 조합
      //case 6:
        //nCr();
        //break;

      // 7. 종료
      case 7:
      return 0;
      
      // 오류
      default :
      printf("오류입니다.\n");
      break;

    }
  }
}


// 메뉴 
int menu(){
  int n;

  printf("1. 팩토리얼\n");
  printf("2. 사인\n");
  printf("3. 로그\n");
  printf("4. 제곱근\n");
  printf("5. 순열\n");
  printf("6. 조합\n");
  printf("7. 종료\n");

  printf("원하는 메뉴번호를 입력하세요: ");
  scanf("%d",&n);

  return n;
}

// 1. 팩토리얼 함수
int factorial(){
  int i, start, end, temp=0;

  printf("시작할 수와 끝날 수를 입력하세요 : ");
  scanf("%d %d", &start, &end);

  printf("\n%d부터 %d까지의 수열", start, end);
  printf("----------------\n");

  for(i=start; i<=end; i++){
    temp += i;
    printf("%d ", temp);
  }
  printf("\n");

  printf("-------------------------------\n");
  printf("-------------------------------\n\n\n");
  return 0;
}

// 2. 사인 함수
int sine(){
  double num;

  printf("수를 입력하세요 : ");
  scanf("%lf", &num);

  printf("%lf\n", sin(num));

  printf("-------------------------------\n");
  printf("-------------------------------\n\n\n");
  return 0;
}


// 3. 로그 함수
int loge(){
  double num;

  printf("수를 입력하세요 : ");
  scanf("%lf", &num);

  printf("%lf의 log값 : %lf\n", num, log(num));

  printf("-------------------------------\n");
  printf("-------------------------------\n\n\n");
  return 0;
}


// 4. 제곱근 함수
int sqrte(){
  double num;

  printf("수를 입력하세요 : ");
  scanf("%lf", &num);

  printf("%d의 제곱근 : %lf\n", (int)num, sqrt(num));

  printf("-------------------------------\n");
  printf("-------------------------------\n");
  return 0;
}


/* 아직 이해하는 중..
//5. 순열 함수
int nPr(){

  printf("수를 입력하세요: ");
  scanf("%d", &npr);
  
  real_npr(0);

  return 0;
}

void real_npr(int x){
  if (x == npr) {
		for (int i = 0; i < npr; i++) 
		printf("%d\n",dep[i]);
		//printf("\n");
		return;
	}

	for (int i = 0; i < npr; i++) {
		//printf("i = %d\n",i);
		dep[x] = i + 1;
		real_npr(x + 1);
    //printf("for %d x=%d\n", i, x);
	}
}


// 6. 조합 함수
int nCr(){
  printf("한자리 수를 두개 입력하세요: ");
  scanf("%d %d", &ncr, &M);
	real_ncr(0,0);

	return 0;
}

void real_ncr(int c,int t) {
	if (c == M) {
		for (int i = 0; i < M; i++)
			printf("%d ", arr[i]);
		printf("\n");
        return;
	}

	for (int i = t; i < ncr; i++) {
		if (!visited_ncr[i]) {
			arr[c] = i+1;
			visited_ncr[i] = true;
			real_ncr(c + 1,i);
			visited_ncr[i] = false;
		}
	}
}
*/

