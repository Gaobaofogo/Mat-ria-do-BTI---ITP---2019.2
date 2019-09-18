#include <stdio.h>
#include <math.h>
#include "exerc.h"


double cylinderVolume(double height, double radius);


int main() {

  printf("%lf\n", cylinderVolume(10, 2.5));

  return 0;
}

double cylinderVolume(double height, double radius) {
  return pi * pow(radius, 2) * height;
}
