#include <stdio.h>


int main(int argc, char *argv[])
{
  float graus_celcius, farenraite;

  printf("Digite a temperatuda em farenraite: ");
  scanf("%f", &farenraite);

  graus_celcius = (farenraite - 32) * (5 / 9);

  printf("Valor em graus celcius eh de %f", graus_celcius);

  return 0;
}
