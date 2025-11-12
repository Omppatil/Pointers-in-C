#include <stdio.h>
int main(void) {
  int i = 4;
  printf("Address of i is %p", &i);// (&) = Address of value
  printf("\nThe value of i is %d", i);
  printf("\nThe value of i is %d", *(&i));// (*) = Value at address

  return 0;
}