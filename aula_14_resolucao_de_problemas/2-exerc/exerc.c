#include <stdio.h>


int main(int argc, char *argv[])
{
  float v1[6], v2[6];

  for (int i = 0; i < 6; i++) {
    printf("Digite o %d valor: ", i + 1);
    scanf("%f", &v1[i]);
  }

  for (int j = 0; j < 6; j++) {
    v2[j] = v1[j] * v1[j];
    printf("%.1f tem seu quadrado %.1f\n", v1[j], v2[j]);
  }

  return 0;
}
