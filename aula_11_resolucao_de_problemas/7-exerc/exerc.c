#include <stdio.h>


int main() {
  int estado_selecionado, True = 1;
  float imposto_MG = 0.07, imposto_SP = 0.12, imposto_RJ = 0.15, imposto_MS = 0.08;
  float valor_produto;

  printf("Digite o valor do produto: ");
  scanf("%f", &valor_produto);

  do {
    printf("Digite o estado: ");
    scanf("%d", &estado_selecionado);

    switch (estado_selecionado) {
      case 1:
        printf("Valor do produto em MG: R$%.2f\n", valor_produto + (valor_produto * imposto_MG));
        break;
      case 2:
        printf("Valor do produto em SP: R$%.2f\n", valor_produto + (valor_produto * imposto_SP));
        break;
      case 3:
        printf("Valor do produto no RJ: R$%.2f\n", valor_produto + (valor_produto * imposto_RJ));
        break;
      case 4:
        printf("Valor do produto no MS: R$%.2f\n", valor_produto + (valor_produto * imposto_MS));
        break;
      case 5:
        True = 0;
        break;
      default:
        printf("Estado não conhecido\n");
        break;
    }
  } while (True);

  return 0;
}
