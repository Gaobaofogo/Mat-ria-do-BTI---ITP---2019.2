#include <stdio.h>


int main() {
  int v[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Endereco de v[%d][%d]: %p\n", i + 1, j + 1, &v[i][j]);
    }
  }

  return 0;
}
