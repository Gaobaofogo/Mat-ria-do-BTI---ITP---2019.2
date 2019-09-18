#include <stdio.h>


int main() {
  int v[10], acc = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite o numero de posicao %d: ", i + 1);
    scanf("%d", &v[i]);

    if (v[i] < 0) {
      v[i] = 0;
    }
  }

  for (int i = 0; i < 10; ++i) {
    printf("%d\n", v[i]);
  }

  return 0;
}
