#include <stdio.h>


int main() {
  int dias;
  float valor_dia;

  printf("Digite a quantidade de dias: ");
  scanf("%d", &dias);

  printf("Digite o valor referente ao primeiro dia: ");
  scanf("%f", &valor_dia);

  printf("O valor bruto recebido sera R$%.2f\n", valor_dia * dias);
  printf("O valor liquido recebido sera R$%.2f\n", (valor_dia * dias) * 0.92);

  return 0;
}
