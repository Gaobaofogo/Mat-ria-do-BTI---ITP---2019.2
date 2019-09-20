#include <stdio.h>


int main() {
  int VET[6] = {1, 0, 5, -2, -5, 7}, soma_b;

  soma_b = VET[0] + VET[1] + VET[5];

  printf("A soma da questao b eh de: %d\n", soma_b);

  VET[4] = 100;

  for (int i = 0; i < sizeof(VET)/4; ++i) {
    printf("Posicao %d: %d\n", i + 1, VET[i]);
  }

  return 0;
}
