#include <stdio.h>


float convertToPound(float km);


int main() {

  printf("%.2f\n", convertToPound(22.6796));

  return 0;
}

float convertToPound(float km) {
  return km / 0.45;
}
