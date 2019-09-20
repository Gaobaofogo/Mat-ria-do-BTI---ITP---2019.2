#include <stdio.h>


int main() {
  int x, y;

  printf("Digite o primeiro numero: ");
  scanf("%d", &x);

  printf("Digite o segundo numero: ");
  scanf("%d", &y);

  if (x == y) {
    printf("Numeros iguais\n");
  } else {
    if (x < y) {
      printf("O maior eh %d e a diferenca eh %d\n", y, y - x);
    } else {
      printf("O maior eh %d e a diferenca eh %d\n", x, x - y);
    }
  }

  return 0;
}
