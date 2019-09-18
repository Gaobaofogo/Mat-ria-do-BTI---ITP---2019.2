#include <stdio.h>


float convertToInch(float cm);


int main() {

  printf("%.2f\n", convertToInch(50.8));

  return 0;
}

float convertToInch(float cm) {
  return cm / 2.54;
}
