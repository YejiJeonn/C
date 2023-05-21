#include <stdio.h>

int main(void) {
  int num = 0;
  int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      num = arr1[i];
      arr1[i] = arr2[i];
      arr2[i] = num;
    } else if (i % 2 != 0) {
      num = arr1[i];
      arr1[i] = arr2[i];
      arr2[i] = num;
    }
    printf("arr1[%d] = %d   arr2[%d] = %d\n", i, arr1[i], i, arr2[i]);
  }
  return 0;
}
