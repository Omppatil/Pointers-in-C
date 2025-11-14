#include <stdio.h>
void min_max(int*, int*, int*, int*);

int main(void) {
  int num1, num2, min, max;
  printf("Welcome to Finding Min and Max using Pointers.\n");
  printf("Please enter the first value: ");
  scanf("%d", &num1);
  printf("Now enter the second value: ");
  scanf("%d", &num2);

  min_max(&num1, &num2, &min, &max);
  printf("Between %d and %d, Minimum is %d and Maximum is %d", num1, num2, min, max);
  return 0;
}
void min_max(int *num1, int *num2, int *min, int *max) {
  if(*num1 < *num2) {
    *min = *num1;
    *max = *num2;
  } else {
     *min = *num2;
     *max = *num1;
  }
}