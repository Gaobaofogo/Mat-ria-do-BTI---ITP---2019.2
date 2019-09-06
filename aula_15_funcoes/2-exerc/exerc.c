#include <stdio.h>
#include <locale.h>


float soma(float x, float y);
float subtracao(float x, float y);
float divisao(float x, float y);
float multiplicacao(float x, float y);


int main() {
  setlocale(LC_ALL, "Portuguese_Brasil");

  int a, b, result;
  char operation;

  printf("Digite a operação: ");
  scanf("%c", &operation);

  printf("Digite o primeiro número: ");
  scanf("%d", &a);

  printf("Digite o segundo número: ");
  scanf("%d", &b);

  switch (operation) {
    case '+':
      result = soma(a, b);
      break;
    case '-':
      result = subtracao(a, b);
      break;
    case '*':
      result = multiplicacao(a, b);
      break;
    case '/':
      result = divisao(a, b);
      break;
    default:
      printf("Não entendi a operação desejada\n");
  }

  printf("%d %c %d = %d\n", a, operation, b, result);

  return 0;
}


float soma(float x, float y) {
  return x + y;
}

float subtracao(float x, float y) {
  return x - y;
}

float divisao(float x, float y) {
  return x / y;
}

float multiplicacao(float x, float y) {
  return x * y;
}
