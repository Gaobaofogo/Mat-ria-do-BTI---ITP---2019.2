#include <stdio.h>


int main(){
  float num1, num2;

  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);

  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  printf("A soma dos dois numeros eh de '%f'\n", num1 + num2);

  return 0;
}
