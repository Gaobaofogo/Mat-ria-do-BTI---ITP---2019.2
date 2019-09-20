#include <stdio.h>


int main() {
  int v[5];
  float total, media;

  for (int i = 0; i < 5; i++) {
    printf("Digite um valor: ");
    scanf("%d", &v[i]);
  }

  for (int j = 0; j < 5; j++) {
    if (v[j] % 5 == 0) {
      printf("%d eh divisivel por 5\n", v[j]);
    }
    total += v[j];
  }

  media = total / 20.0;

  for (int k = 0; k < 5; k++) {
    if (v[k] > media) {
      printf("%d eh maior que a media\n", v[k]);
    } else if (v[k] < media) {
      printf("%d eh menor que a media\n", v[k]);
    }
  }

  printf("A media eh %.1f\n", media);

  return 0;
}
