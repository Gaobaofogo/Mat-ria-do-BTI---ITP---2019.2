#include <stdio.h>


int main() {
  float celcius, farenrait;

  printf("Digite o farenraitn: ");
  scanf("%f", &farenrait);

  celcius = 5.0 * ((farenrait - 32.0)/9.0);

  printf("O valor de celcius eh de: %f\n", celcius);

  return 0;
}
