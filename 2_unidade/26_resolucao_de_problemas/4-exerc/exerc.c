#include <stdio.h>


int main() {
  int v[5] = {2,3,4,5,7}, *x = v;

  for(int i = 0; i < 5; i++) {
    printf("v[%d] * 2 = %d\n", i + 1, (*x) * 2);
    x++;
  }

  return 0;
}
