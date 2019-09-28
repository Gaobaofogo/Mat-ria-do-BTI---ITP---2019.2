#include <stdio.h>


int negativos(int n, float *vet) {
  int qntdNegativeNumbers = 0;

  for (int i = 0; i < n; i++) {
    if (vet[i] < 0) {
      qntdNegativeNumbers++;
    }
  }

  return qntdNegativeNumbers;
}

int main() {
  float v[10] = {1.0, -2.0, 3.0, -4.0, 5.0, -6.0, 7.0, 8.0, 9.0, 10.0};
  int qntdNegativeNumbers;

  qntdNegativeNumbers = negativos(10, v);

  printf("Existem %d numeros negativos no vetor\n", qntdNegativeNumbers);

  return 0;
}
