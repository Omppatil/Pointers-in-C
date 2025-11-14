#include <stdio.h>
int main(void) {
  int num = 4;
  int *ptr = &num;
  printf("\nThe value of num: %d", num);
  *ptr = 22;
  printf("\nNow The value of num is become: %d", num);
  return 0;
}