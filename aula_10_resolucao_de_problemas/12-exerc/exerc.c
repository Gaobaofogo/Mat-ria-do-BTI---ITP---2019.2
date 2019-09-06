#include <stdio.h>


int main() {
  int notas_100, notas_50, notas_20, notas_10, notas_5;
  int saque, valor_incorreto = 1;

  do {
    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    if (saque % 5 != 0) {
      printf("O valor não pode ser retirado\n");
    } else {
      notas_100 = saque / 100;
      saque = saque % 100;

      notas_50 = saque / 50;
      saque = saque % 50;

      notas_20 = saque / 20;
      saque = saque % 20;

      notas_10 = saque / 10;
      saque = saque % 10;

      notas_5 = saque / 5;
      saque = saque % 5;

      printf(notas_100 ? "%d de R$100\n" : "", notas_100);
      printf(notas_50 ? "%d de R$50\n" : "", notas_50);
      printf(notas_20 ? "%d de R$20\n" : "", notas_20);
      printf(notas_10 ? "%d de R$10\n" : "", notas_10);
      printf(notas_5 ? "%d de R$5\n" : "", notas_5);

      valor_incorreto = 0;
    }
  } while (valor_incorreto);

  return 0;
}
