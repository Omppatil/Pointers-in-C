#include <stdio.h>
int swap(int*, int*);

int main(void) {
  int x, y;
  printf("Please enter the value of first number(x): ");
  scanf("%d", &x);
  printf("\nNow, enter the value of second number(y): ");
  scanf("%d", &y);
  printf("\nvalue of x: %d  value of y: %d", x, y);
  swap(&x, &y);
  printf("\nvalue of x: %d  value of y: %d", x, y);
  return 0;
}

int swap(int* ptr1, int* ptr2) {
  printf("\nBefore Swap");
  printf("\nvalue of ptr1: %d  value of ptr2: %d", *ptr1, *ptr2);
  
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;

  printf("\nAfter Swap");
  printf("\nvalue of ptr1: %d  value of ptr2: %d", *ptr1, *ptr2);
}