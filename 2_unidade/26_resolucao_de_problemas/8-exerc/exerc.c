#include <stdio.h>

/*
 * Fills the vector with the value of x
 *
 * @param v[] Integer vector
 * @param x Integer
 * @return void
 */
void fillVector(int v[10], int x) {
  int *aux = v;

  for (int i = 0; i < 10; i++) {
    *aux = x;
    aux++;
  }
}

int main() {
  int v[10], x = 117;

  fillVector(v, x);

  for (int i = 0; i < 10; i++) {
    printf("v[%d]=%d\n", i+1, v[i]);
  }
  

  return 0;
}
