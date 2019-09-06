#include <stdio.h>


int main() {
  float valor_pago;

  printf("Digite o valor a ser pago: ");
  scanf("%f", &valor_pago);

  printf("\n");
  printf("O total a pagar com 10%% de desconto:  R$%.2f\n", valor_pago * 0.9);
  printf("O valor da parcela em 3x sem juros:   R$%.2f\n", valor_pago / 3.0);
  printf("O valor da parcela em 10x com juros:  R$%.2f\n", (valor_pago + valor_pago * 0.06) / 10);
  printf("A comissao do vendedor a vista:       R$%.2f\n", (valor_pago * 0.9) * 0.05);
  printf("A comissao do vendedor com parcela:   R$%.2f\n", valor_pago * 0.05);

  return 0;
}
