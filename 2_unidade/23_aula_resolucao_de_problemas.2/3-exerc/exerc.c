#include <stdio.h>


int main() {
  int v[4][4];

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      v[i][j] = (i + 1) * (j + 1);
      printf("%d\t", v[i][j]);
    }

    printf("\n");
  }

  return 0;
}
