#include <stdio.h>


int main() {
  int v[5] = {2, 3, 4, 5, 6}, *x = v;

  for (int i = 0; i < 5; i++) {
    if ((*x) % 2 == 0) {
      printf("v[%d] eh par\n", i + 1);
    }
    x++;
  }

  return 0;
}
