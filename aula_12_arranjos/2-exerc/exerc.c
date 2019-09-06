#include <stdio.h>

#define N 5


int main() {
  int a[N], maior_num = 0, menor_num = 0;

  for (int i = 0; i < N; i++) {
    printf("Digite um numero: ");
    scanf("%d", &a[i]);
  }

  for (int j = 0; j < N; ++j) {
    if (a[j] > maior_num)
      maior_num = a[j];

    if (menor_num > a[j]) 
      menor_num = a[j];
  }

  printf("O maior numero eh %d\n", maior_num);
  printf("O menor numero eh %d\n", menor_num);

  return 0;
}
