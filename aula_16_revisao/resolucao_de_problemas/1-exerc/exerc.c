#include <stdio.h>


int dobraValor(int x);


int main() {
  int x = 19;

  printf("O dobro de %d eh ", x);

  x = dobraValor(x);

  printf("%d\n", x);

  return 0;
}

int dobraValor(int x) {
  return x * 2;
}
