#include <stdio.h>


int main() {
  int y = 150, x = 10;

  if (&x > &y) {
    printf("Addres of x: %p -> %d\n", &x, x);
  } else {
    printf("Addres of y: %p -> %d\n", &y, y);
  }

  return 0;
}
