#include <stdio.h>


int main() {
  float celcius, farenrait;

  printf("Temperatura em Celcius: ");
  scanf("%f", &celcius);

  farenrait = celcius * (9.0/5.0) + 32.0;

  printf("A temperatura em farenrait eh de: %f\n", farenrait);

  return 0;
}
