#include <stdio.h>


int sumTwoVectors(int *v1, int len1, int *v2, int len2, int *v3) {
  if (len1 != len2) return 0;

  int *auxV1 = v1, *auxV2 = v2, *auxV3 = v3;

  for (int i = 0; i < len1; i++) {
    *auxV3 = *auxV1 + *auxV2;
    auxV1++;
    auxV2++;
    auxV3++;
  }

  return 1;
}

int main() {
  int v1[5] = {1, 2, 3, 4, 5}, v2[5] = {5, 4, 3, 2, 1}, v3[5];
  int result;

  result = sumTwoVectors(v1, 5, v2, 5, v3);

  if (result == 0) {
    printf("Os vetores possuem tamanhos diferentes\n");
  } else {
    for (int i = 0; i < 5; i++) {
      printf("v3[%d]=%d\n", i + 1, v3[i]);
    }
  }

  return 0;
}
