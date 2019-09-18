#include <stdio.h>


float convertToMiles(float km);


int main() {

  printf("%.2f\n", convertToMiles(40));

  return 0;
}

float convertToMiles(float km) {
  return km/1.61;
}
