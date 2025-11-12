#include <stdio.h>
int main(void) {
  int i = 5;
  int *j, **k;
  j = &i;
  k = &j;

  printf("Address of i is %p", &i);
  printf("\nAddress of i is %p", j);
  printf("\nAddress of i is %p", *k);
  printf("\nAddress of j is %p", &j);
  printf("\nAddress of j is %p", k);
  printf("\nAddress of k is %p", &k);
  printf("\nValue of j is %p", j);
  printf("\nValue of k is %p", k);
  printf("\nValue of i is %d", i);
  printf("\nValue of i is %d", *(&i));
  printf("\nValue of i is %d", *j);
  printf("\nValue of i is %d", **k);

  return 0;
}