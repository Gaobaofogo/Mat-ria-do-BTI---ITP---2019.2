#include <stdio.h>


float convertToMs(float velocity);


int main() {

  printf("%.2f\n", convertToMs(72));

  return 0;
}


float convertToMs(float velocity) {
  return velocity / 3.6;
}
