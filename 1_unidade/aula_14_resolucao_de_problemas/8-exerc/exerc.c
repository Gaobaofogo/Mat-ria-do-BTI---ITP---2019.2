#include <stdio.h>


int main() {
  int a[4] = {1, 2, 3, 4}, b[4] = {5, 6, 7, 8}, c[4];

  for (int i = 0, j = 3; i < 4; i++, j--) {
    c[i] = a[i] + b[j];
    printf("%d\n", c[i]);
  }

  return 0;
}
