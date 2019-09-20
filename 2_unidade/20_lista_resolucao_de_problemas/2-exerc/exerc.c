#include <stdio.h>
#include <math.h>


double hypotenuse(double a, double b);


int main() {

  printf("%lf\n", hypotenuse(4, 3));

  return 0;
}

double hypotenuse(double a, double b) {
  return sqrt(pow(a, 2) + pow(b, 2));
}
