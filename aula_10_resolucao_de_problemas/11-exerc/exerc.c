#include <stdio.h>


int main() {
  float total = 0, input_idade, qntd_idades;

  do {
    printf("Digite a idade: ");
    scanf("%f", &input_idade);

    total += input_idade;
    qntd_idades++;
  } while (input_idade != 0);

  qntd_idades--;

  printf("A media de idades eh de: %f\n", total / qntd_idades);

  return 0;
}
