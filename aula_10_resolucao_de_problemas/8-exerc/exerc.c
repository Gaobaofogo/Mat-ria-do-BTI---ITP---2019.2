#include <stdio.h>


int main() {
  int n;

  printf("Digite n: ");
  scanf("%d", &n);

  while(n >= 0) {
    printf("%d\n", n);
    n--;
  }

  printf("FIM!!!\n");

  return 0;
}
