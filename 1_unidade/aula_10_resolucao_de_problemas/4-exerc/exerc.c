#include <stdio.h>


int main() {
  float celcius, kelvin;

  printf("Digite em celcius: ");
  scanf("%f", &celcius);

  kelvin = celcius + 273.15;

  printf("Em kelvin fica %f\n", kelvin);

  return 0;
}
