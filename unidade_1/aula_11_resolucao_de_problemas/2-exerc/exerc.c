#include <stdio.h>


int main() {
  float valor_1, valor_2, valor_3, premio, total;

  printf("Digite o valor do jogador 1: ");
  scanf("%f", &valor_1);

  printf("Digite o valor do jogador 2: ");
  scanf("%f", &valor_2);

  printf("Digite o valor do jogador 3: ");
  scanf("%f", &valor_3);

  printf("Digite o valor do premio: ");
  scanf("%f", &premio);

  total = valor_1 + valor_2 + valor_3;

  printf("\n");
  printf("Valor bruto do primeiro jogador: R$%.2f\n", (valor_1/total) * premio);
  printf("Valor bruto do segundo jogador: R$%.2f\n", (valor_2/total) * premio);
  printf("Valor bruto do terceiro jogador: R$%.2f\n", (valor_3/total) * premio);
  printf("\n");

  premio = premio * 0.725;

  printf("Valor com imposto de renda ao jogador 1: R$%.2f\n", (valor_1/total) * premio);
  printf("Valor com imposto de renda ao jogador 2: R$%.2f\n", (valor_2/total) * premio);
  printf("Valor com imposto de renda ao jogador 3: R$%.2f\n", (valor_3/total) * premio);
  
  return 0;
}
