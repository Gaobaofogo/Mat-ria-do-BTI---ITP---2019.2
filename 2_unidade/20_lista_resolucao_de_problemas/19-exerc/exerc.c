#include <stdio.h>


int isTriangle(int x, int y, int z);
void typeTriangle(int x, int y, int z);


int main() {
  int x, y, z;

  printf("Digite o primeiro lado do triangulo: ");
  scanf("%d", &x);

  printf("Digite o segundo lado do triangulo: ");
  scanf("%d", &y);

  printf("Digite o terceiro lado do triangulo: ");
  scanf("%d", &z);

  if (isTriangle(x, y, z)) {
    typeTriangle(x, y, z);
  } else {
    printf("Os lados informados não geram um triangulo\n");
  }

  return 0;
}


int isTriangle(int x, int y, int z) {
  int conditionFirstSide  = x < y + z;
  int conditionSecondSide = y < x + z;
  int conditionThirdSide  = z < x + y;

  return conditionFirstSide && conditionSecondSide && conditionThirdSide;
}

void typeTriangle(int x, int y, int z) {
  int allSidesEqual = x == y && x == z && y == z;
  int twoEqualSides = x == y || x == z || y == z;

  if (allSidesEqual) {
    printf("Equilatero\n");
  } else if(twoEqualSides) {
    printf("Isoceles\n");
  } else {
    printf("Escaleno\n");
  }
}
