#include <stdio.h>


int superFactorial(int n);
int factorial(int n);


int main() {

  printf("%d\n", superFactorial(4));

  return 0;
}


int superFactorial(int n) {
  int total = 1;

  for (int i = 1; i <= n; i++) {
    total *= factorial(i);
  }

  return total;
}


int factorial(int n) {
  int total = 1;

  for(int i = 1; i <= n; i++) {
    total *= i;
  }

  return total;
}
