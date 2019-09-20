#include <stdio.h>
#include <math.h>
#include "const.h"


double sphereVolume(double radius);


int main() {

  printf("%lf\n", sphereVolume(5));

  return 0;
}

double sphereVolume(double radius) {
  return (4.0/3.0) * pi * pow(radius, 3);
}
