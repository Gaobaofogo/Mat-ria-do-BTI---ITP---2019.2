#include <stdio.h>


void computesOperation(float x, float y, char operation);


int main () {

  computesOperation(5.0, 3.0, '+');

  return 0;
}

void computesOperation(float x, float y, char operation) {
  float result;
  int success = 1;
  
  switch(operation) {
    case '+':
      result = x + y;
      break;
    case '-':
      result = x - y;
      break;
    case '/':
      result = x / y;
      break;
    case '*':
      result = x *  y;
      break;
    default:
      printf("Operacao desconhecida\n");
      success = 0;
      break;
  }

  if (success) {
    printf("%.2f %c %.2f = %.2f\n", x, operation, y, result);
  }
}

