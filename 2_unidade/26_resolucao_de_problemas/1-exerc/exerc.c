#include <stdio.h>

/*
 * This func sums two numbers and store
 * the result in variable 'a'
 * @param *a Int pointer
 * @param *b Int pointer
 * @return void
 */
void sum(int *a, int *b) {
  *a = (*a) + (*b);
}

int main() {
  int x = 5, y = 7;

  sum(&x, &y);

  printf("Valor de x: %d\n", x);
  printf("Valor de y: %d\n", y);

  return 0;
}
