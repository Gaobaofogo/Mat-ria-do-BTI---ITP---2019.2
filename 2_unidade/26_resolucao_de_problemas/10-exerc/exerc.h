#define N 9

typedef struct {
  int value;
  int occurences;
} ElementVector;


/*
 * Counts the quantity of ocurrences 
 * of 'element' int array v[N]
 *
 * @param v[N] Integer array
 * @param element Integer
 * @return Integer quantity of ocurrences of element
 */
int elementOcurrencesInArray(int v[N], int element) {
  int total = 0;

  for (int i = 0; i < N; i++) {
    if (v[i] == element) {
      total++;
    }
  }

  return total;
}

/*
 * Checks if the element is in the vector
 *
 * @param v[] ElementVector vector
 * @param length_v Int length of array v[]
 * @param element Element to use the checation
 * @return Int 1 if it finds the element and 0 if it doesn't find
 */
int hasElement(ElementVector v[], int length_v, int element) {
  for (int i = 0; i < length_v; i++) {
    if (v[i].value == element) {
      return 1;
    }
  }

  return 0;
}
