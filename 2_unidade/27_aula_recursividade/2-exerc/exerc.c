#include <stdio.h>


int myPow(int base, int exponent);


int main() {
  int base = 3, exponent = 4;

  printf("%d ** %d = %d\n", base, exponent, myPow(base, exponent));

  return 0;
}

/*
 * Mathematician expression of exponentiation
 * @param base Int
 * @param exponent Int
 * @return -1 -> Error "Not allowed exponentiaition of negative numbers
 *         n  -> Int
 */
int myPow(int base, int exponent) {
  if (exponent < 0) 
    return -1;

  if (exponent == 0)
    return 1;
  else if (exponent == 1) 
    return base;
  else 
    return base * myPow(base, exponent - 1);
}
