#include <stdio.h>
int main(void) {
  int i = 5;
  int *j;
  j = &i;

  printf("Address of i is %p", &i);
  printf("\nAddress of i is %p", j);
  printf("\nAddress of j is %p", &j);
  printf("\nValue of j is %p", j);
  printf("\nValue of i is %d", i);
  printf("\nValue of i is %d", *(&i));
  printf("\nValue of i is %d", *j);

  return 0;
}