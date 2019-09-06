#include <stdio.h>


int main() {
  float preco;

  printf("Digite o preco antigo: ");
  scanf("%f", &preco);

  if (preco <= 50.0) {
    printf("O novo valor eh R$%.2f\n", preco + preco * 0.05);
  } else if (preco <= 100.0) {
    printf("O novo valor eh R$%.2f\n", preco + preco * 0.1);
  } else {
    printf("O novo valor eh R$%.2f\n", preco + preco * 0.15);
  }

  return 0;
}
