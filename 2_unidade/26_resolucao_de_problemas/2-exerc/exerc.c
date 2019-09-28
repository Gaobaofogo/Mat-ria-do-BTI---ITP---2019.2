#include <stdio.h>


int main() {
  int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for(int i = 0; i < 10; i++) {
    printf("Endereco de v[%d]: %p\n", i, &v[i]);
  }

  return 0;
}
