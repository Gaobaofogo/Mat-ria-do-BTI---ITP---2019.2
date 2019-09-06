#include <stdio.h>


int main() {
  float num1, num2, num3;

  printf("Num 1: ");
  scanf("%f", &num1);

  printf("Num 2: ");
  scanf("%f", &num2);

  printf("Num 3: ");
  scanf("%f", &num3);

  printf("Num1 * num3 = '%f'\n", num1 * num3);
  printf("Num2 / num3 = '%f'\n", num2 / num3);
  return 0;
}
