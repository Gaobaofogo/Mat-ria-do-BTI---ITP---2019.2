#include <stdio.h>


int main() {
  int x = 5, y = 10, *m = NULL, *n = NULL;
  char c = 'S', *d = NULL;

  m = &x;
  n = &y;
  d = &c;

  printf("Before x: %d\n", x);
  printf("Before y: %d\n", y);
  printf("Before c: %c\n", c);

  (*m) = 10;
  (*n) = 5;
  (*d) = 'T';

  printf("After x: %d\n", x);
  printf("After y: %d\n", y);
  printf("After c: %c\n", c);

  printf("Address of x and *m: %p - %p\n", &x, m);
  printf("Address of y and *n: %p - %p\n", &y, n);
  printf("Address of c and *d: %p - %p\n", &c, d);

  return 0;
}
