#include <stdio.h>


int factorial(int n);


int main() {

  printf("Factorial: %d\n", factorial(5));
  return 0;
}

int factorial(int n) {
  int total = 1;

  for (int i = 2; i <=n; i++) {
    total *= i;
  }

  return total;
}
