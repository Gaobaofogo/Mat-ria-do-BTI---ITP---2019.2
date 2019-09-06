#include <stdio.h>


int main() {
  int a, b, c;

  printf("Digite a: ");
  scanf(" %d", &a);

  printf("Digite b: ");
  scanf(" %d", &b);

  printf("Digite c: ");
  scanf(" %d", &c);

  printf("A && B: %d\n", a && b);
  printf("A || C: %d\n", a || c);
  printf("Not (A && B || C): %d\n", !((a && b ) || c));

  return 0;
}
