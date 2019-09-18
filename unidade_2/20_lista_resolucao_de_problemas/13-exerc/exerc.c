#include <stdio.h>


float convertToCm(float inch);


int main() {

  printf("%.2f\n", convertToCm(20));

  return 0;
}

float convertToCm(float inch) {
  return inch * 2.54;
}
