#include <stdio.h>


float convertToKm(float miles);


int main() {

  printf("%.2f\n", convertToKm(20));

  return 0;
}

float convertToKm(float miles) {
  return miles * 1.61;
}
