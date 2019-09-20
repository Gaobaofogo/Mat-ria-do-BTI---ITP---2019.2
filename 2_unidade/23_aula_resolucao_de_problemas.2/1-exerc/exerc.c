#include <stdio.h>


int main() {
  int v[4][4], nums_greather_than_10;

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      printf("v[%d][%d] = ", i+1, j+1);
      scanf("%d", &v[i][j]);
      
      if (v[i][j] > 10) nums_greather_than_10++;
    }
  }

  printf(
    "A quantidade de numeros maiores que 10 eh %d\n",
    nums_greather_than_10
  );

  return 0;
}
