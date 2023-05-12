// 나무 길이 측정

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){
  double height, distance, degrees, tree_height, radians;

  printf("나무와의 거리 (단위는 미터) : ");
  scanf("%lf", &distance);                  // 나무와 사람의 거리

  printf("측정자의 키 (단위는 미터) : ");
  scanf("%lf", &height);                    // 사람의 키

  printf("각도 (단위는 도) : ");
  scanf("%lf", &degrees);                   // 사람의 눈과 나무 끝의 각도

  radians = degrees * (3.141592 / 180.0);   // 각도 * (반지름 / 180)
  tree_height = tan(radians) * distance + height;     // 나무의 높이 = radians를 탄젠트 한 값 * 거리 + 사람 키

  printf("나무의 높이 : %lf\n", tree_height);


  return 0;
}
