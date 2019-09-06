#include <stdio.h>


int main() {
  float kelvin, celcius;

  printf("Digite em Kelvin: ");
  scanf("%f", &kelvin);

  celcius = kelvin - 273.15;

  printf("Em celcius fica %f\n", celcius);

  return 0;
}
