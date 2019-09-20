#include <stdio.h>


int main() {
  int v[4][4];

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      printf("v[%d][%d] = ");
      scanf("%d", v[i][j]);
    }
  }

  return 0;
}
