#include <stdio.h>


float convertToKg(float pound);


int main() {

  printf("%.2f\n", convertToKg(50));

  return 0;
}

float convertToKg(float pound) {
  return pound * 0.45;
}
