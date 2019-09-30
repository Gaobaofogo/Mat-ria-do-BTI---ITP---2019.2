#include <stdio.h>


int convertToBinary(int num, int numBase10);


int main() {
  int num = 10;
  const int numBase10 = 1;

  printf("Binary of %d is %d\n", num, convertToBinary(num, numBase10));

  return 0;
}

int convertToBinary(int num, int numBase10) {
  if (num == 0)
    return 0;

  return convertToBinary(num/2, numBase10 * 10) + numBase10 * (num % 2);
}
