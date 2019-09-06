#include <stdio.h>


float convertCelciusToKelvin(float C);


int main() {

  printf("%.2f\n", convertCelciusToKelvin(20.0));

  return 0;
}


float convertCelciusToKelvin(float C) {
  return C + 273.15;
}
