#include <stdio.h>


int main(int argc, char *argv[])
{
  int v[10], duplicado = 0;

  for (int i = 0; i < 10; ++i) {
    printf("Digite o %d valor: ", i + 1);
    scanf("%d", &v[i]);
  }

  for (int j = 0; j < 10; ++j) {
    for (int k = 0; k < 10; ++k) {
      if (v[j] == v[k]) {
        duplicado++;
      }
    }

    if (duplicado > 1) {
      printf("Numero %d encontrado na posicao ", v[j]);
      for (int k = 0; k < 10; ++k) {
        if (v[j] == v[k]) {
          printf("%d, ", k);
        }
      }
      printf("\n");
    }

    duplicado = 0;
  }

  return 0;
}
