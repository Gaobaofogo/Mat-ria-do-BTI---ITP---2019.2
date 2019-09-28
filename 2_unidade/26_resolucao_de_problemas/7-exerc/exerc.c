#include <stdio.h>

/*
 * Put the highest value in x, the average
 * value in y and the lowest value in z
 *
 * @param *x Integer pointer
 * @param *y Integer pointer
 * @param *z Integer pointer
 * @return void
 */
int swapValues(int *x, int *y, int *z) {
  int aux_x = *x, aux_y = *y, aux_z = *z;

  if (*x > *y && *x > *z) {
    if (!(*y > *z)) {
      *y = aux_z;
      *z = aux_y;
    }
  } else if (*y > *x && *y > *z) {
    if (*x > *z) {
      *y = aux_x;
      *z = aux_z;
    } else {
      *y = aux_z;
      *z = aux_x;
    }

    *x = aux_y;
  } else {
    if (*x > *y) {
      *y = aux_x;
      *z = aux_y;
    } else {
      *y = aux_y;
      *z = aux_x;
    }

    *x = aux_z;
  }

  if (*x == *y && *x == *z && *y == *z) return 1;

  return 0;
}

int main() {
  int x = 2, y = 1, z = 3;

  swapValues(&x, &y, &z);

  printf("%d - %d - %d\n", x, y, z);

  return 0;
}
