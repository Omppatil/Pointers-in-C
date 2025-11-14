#include <stdio.h>
int main(void) {
  int num;
  int *ptr = &num;
  printf("Welcome to the showcasing of integer using Pointer.\n");
  printf("Please enter the value: ");
  scanf("%d", ptr);

  printf("\nTHe value of num: %d", num);
  printf("\nTHe value of num: %d", *ptr);
  printf("\nTHe address of num: %p", &num);
  printf("\nTHe address of num: %p", ptr);
  return 0;
}