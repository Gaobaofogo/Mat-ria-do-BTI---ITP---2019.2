#include <stdio.h>


float max(float x, float y);


int main() {
  float n = 30, m = 35, maior;

  maior = max(n, m);

  printf("O maior numero eh %2.f\n", maior);

  return 0;
}

float max(float x, float y) {
  if (x > y)
    return x;

  return y;
}
