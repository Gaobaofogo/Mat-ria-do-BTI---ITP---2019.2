#include <stdio.h>


int sumFor(int x, int y);


int main() {
  int sum;

  sum = sumFor(5, 9);

  printf("Sum: %d\n", sum);

  return 0;
}

int sumFor(int x, int y) {
  int total = 0;

  for (int i = x + 1; i < y; i++) {
    total += i;
  }

  return total;
}
