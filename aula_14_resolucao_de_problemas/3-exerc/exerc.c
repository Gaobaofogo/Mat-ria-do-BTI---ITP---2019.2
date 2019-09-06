#include <stdio.h>


int main(int argc, char *argv[])
{
  int v1[8], x, y;

  for (int i = 0; i < 8; ++i) {
    printf("Digite um numero: ");
    scanf("%d", &v1[i]);
  }

  printf("Digite X: ");
  scanf("%d", &x);

  printf("Digite Y: ");
  scanf("%d", &y);

  printf("A soma eh %d", v1[x] + v1[y]);

  return 0;
}
