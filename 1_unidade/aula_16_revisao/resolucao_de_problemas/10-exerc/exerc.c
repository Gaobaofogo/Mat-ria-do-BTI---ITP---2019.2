#include <stdio.h>


float convertCelciusToFahrenheit(float celcius);


int main() {

  printf("%.2f\n", convertCelciusToFahrenheit(35.0));

  return 0;
}


float convertCelciusToFahrenheit(float celcius) {
  return celcius * (9.0/5.0) + 32.0;
}
