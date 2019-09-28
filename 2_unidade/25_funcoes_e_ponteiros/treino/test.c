#include <stdio.h>


typedef struct {
  int *ptr1;
  int *ptr2;
} Registro;

int main() {
  int aux = 10;
  Registro reg, *regPtr;

  reg.ptr1 = &aux;
  regPtr = &reg;

  *reg.ptr1 = 20;
  *(*regPtr).ptr1 = *reg.ptr1 / 4;
  *regPtr->ptr1 = *regPtr->ptr1 + 5;

  printf("%i %i %i %i\n", aux, *reg.ptr1, *(*regPtr).ptr1, *regPtr->ptr1);

  return 0;
}
