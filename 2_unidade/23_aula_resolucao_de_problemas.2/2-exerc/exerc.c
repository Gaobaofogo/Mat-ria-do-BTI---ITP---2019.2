#include <stdio.h>


int main() {
  int v[5][5];

  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      v[i][j] = i == j ? 1 : 0;
      printf("%d ", v[i][j]);
    }

    printf("\n");
  }

  return 0;
}
