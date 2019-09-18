#include <stdio.h>


float convertBetweenInchAndCm(float size, float unity);
float convertToInch(float cm);
float convertToCm(float inch);


int main() {

  printf("%.2f\n", convertBetweenInchAndCm(50.8, 'C'));

  return 0;
}

float convertBetweenInchAndCm(float size, float unity) {
  if (unity == 'P') {
    return convertToCm(size);
  } else if (unity == 'C') {
    return convertToInch(size);
  }
}

float convertToInch(float cm) {
  return cm / 2.54;
}

float convertToCm(float inch) {
  return inch * 2.54;
}
