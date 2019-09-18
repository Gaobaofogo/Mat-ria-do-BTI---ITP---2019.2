#include <stdio.h>


int main() {
  int N = 4;
  float v[N], total = 0;

  for(int i = 0; i < N; ++i) {
    printf("Digite um numero: ");
    scanf("%f", &v[i]);
  }

  for(int j = 0; j < N; j++) {
    total += v[j];
  }

  printf("A media eh %.1f\n", total / N);

  return 0;
}
