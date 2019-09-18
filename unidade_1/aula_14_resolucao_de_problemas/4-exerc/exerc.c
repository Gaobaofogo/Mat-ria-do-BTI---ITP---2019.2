#include <stdio.h>


int main(int argc, char *argv[])
{
  int v[10], maior_elemento, posicao;

  for (int i = 0; i < 10; ++i) {
    printf("Digite o %d valor: ", i + 1);
    scanf("%d", &v[i]);
  }

  maior_elemento = v[9];
  posicao = 9;

  for (int i = 9; i >= 0; --i) {
    printf("%d, ", v[i]);

    if (maior_elemento < v[i]) {
      maior_elemento = v[i];
      posicao = i;
    }
  }
  printf("\n");

  printf("O maior elemento eh %d na posicao %d\n", maior_elemento, posicao + 1);

  return 0;
}
