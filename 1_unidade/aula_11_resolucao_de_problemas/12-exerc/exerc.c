#include <stdio.h>


int main() {
  int numero;

  do {
    printf("Digite o numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
      printf("\n");
      printf("Crescente\n");
      for (int i = 0; i <= numero; i++) {
        if (i % 2 == 0) {
          printf("%d\n", i);
        }
      }

      printf("\nDecrescente\n");
      for (int j = numero;  j >= 0 ; j--) {
        if (j % 2 == 0) {
          printf("%d\n", j);
        }
      }

      printf("\n");
    } else {
      printf("O numero informado nao eh par\n\n");
    }
  } while (numero);

  return 0;
}
