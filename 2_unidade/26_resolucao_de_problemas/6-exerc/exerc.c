#include <stdio.h>


/*
 * Filter the even numbers of 'v' in 'a',
 * filter the odd numbers of 'v' in 'b' and gives
 * the variables 'index_a' and 'index_b' the sizes
 * of 'a' and 'b' respectively
 *
 * @param v Integer List
 * @param a Integer List
 * @param b Integer List
 * @param index_a Will be the length of a
 * @param index_b Will be the length of b
 * @return void
 */
void filterEvenAndOddNumbers(int *v, int *a, int *b,
                             int *index_a, int *index_b) {
  int *aux_a = a, *aux_b = b;

  for (int i = 0; i < 30; i++) {
    if (v[i] % 2 == 0) {
      *aux_a = v[i];
      aux_a++;
      (*index_a)++;
    } else {
      *aux_b = v[i];
      aux_b++;
      (*index_b)++;
    }
  }
}


int main() {
  int v[30], a[30], b[30], index_a = 0, index_b = 0;

  for (int i = 0; i < 30; i++) {
    v[i] = i;
  }

  filterEvenAndOddNumbers(v, a, b, &index_a, &index_b);

  for (int j = 0; j < index_a; j++) {
    printf("a[%d]=%d\n", j, a[j]);
  }

  for (int k = 0; k < index_b; k++) {
    printf("b[%d]=%d\n", k, b[k]);
  }

  return 0;
}
