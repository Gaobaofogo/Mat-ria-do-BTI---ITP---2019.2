#include <stdio.h>


int main() {
  int v[5] = {3, 4, 5, 6, 7}, *ptrV;

  ptrV = v;

  for (int i = 0; i < 5; i++) {
    (*ptrV) += 1;
    ptrV++;
  }

  for (int j = 0; j < 5; j++) {
    printf("v[%d]=%d\n", j + 1, v[j]);
  }

  return 0;
}
