#include <stdio.h>


int main() {
  int x, y, z, w, biggestValue, smallerValue;
  int *p1 = NULL, *p2 = NULL;

  p1 = &z;
  p2 = &w;

  printf("Digite o valor de x: ");
  scanf("%d", &x);

  printf("Digite o valor de y: ");
  scanf("%d", &y);

  if (x > y) {
    biggestValue = x;
    smallerValue = y;
  } else {
    biggestValue = y;
    smallerValue = x;
  }

  if (p1 > p2) {
    (*p1) = biggestValue;
    (*p2) = smallerValue;
  } else {
    (*p2) = biggestValue;
    (*p1) = smallerValue;
  }

  printf("Maior valor e seu endereco: %d -> %p\n", biggestValue, p1);
  printf("Menor valor e seu endereco: %d -> %p\n", smallerValue, p2);

  return 0;
}
