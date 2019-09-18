#include <stdio.h>


int main() {
  int a, b, total = 0;

  printf("Digite a: ");
  scanf("%d", &a);

  printf("Digite b: ");
  scanf("%d", &b);

  do {
   total += a;
   a++;
  } while (a <= b);

  printf("O somatorio de '%d' e '%d' eh: %d", a, b, total);

  return 0;
}
