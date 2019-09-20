#include <stdio.h>


int main() {
  float km, qntd_litros, kilometragem;

  printf("Digite a distancia em kilometros: ");
  scanf("%f", &km);

  printf("Digite a quantidade de litros: ");
  scanf("%f", &qntd_litros);

  kilometragem = km / qntd_litros;

  if (kilometragem < 8) {
    printf("Venda o carro!\n");
  } else if (kilometragem <= 14) {
    printf("Economico\n");
  } else {
    printf("Super economico!\n");
  }

  return 0;
}
