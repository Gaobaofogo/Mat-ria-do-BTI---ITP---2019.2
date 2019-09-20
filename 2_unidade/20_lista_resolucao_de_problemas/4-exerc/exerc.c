#include <stdio.h>


double myPow(double x, int y);


int main() {

  printf("%lf\n", myPow(4, 3));

  return 0;
}


double myPow(double x, int y) {
  double total = 1;

  for (int i = 0; i < y; i++) {
    total *=  x;
  }

  return total;
}
