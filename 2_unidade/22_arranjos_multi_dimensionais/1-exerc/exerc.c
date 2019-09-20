#include <stdio.h>


int main() {
  int v1[3][3], v2[3][3], v3[3][3];

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Digite a posicao [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &v1[i][j]);
    }
  }

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Digite a posicao [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &v2[i][j]);
    }
  }


  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if (v1[i][j] == v2[i][j]) {
        v3[i][j] = 1;
      } else {
        v3[i][j] = 0;
      }
    }
  }

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d ", v3[i][j]);
    }

    printf("\n");
  }


  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      v3[i][j] = v1[i][j] + v2[i][j];
    }
  }


  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d ", v3[i][j]);
    }

    printf("\n");
  }

  return 0;
}
