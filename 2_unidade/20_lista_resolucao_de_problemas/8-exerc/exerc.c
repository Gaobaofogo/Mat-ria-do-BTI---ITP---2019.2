#include <stdio.h>


float convertToKm(float velocity);


int main() {

  printf("%.2f\n", convertToKm(20));

  return 0;
}


float convertToKm(float velocity) {
  return velocity * 3.6;
}
