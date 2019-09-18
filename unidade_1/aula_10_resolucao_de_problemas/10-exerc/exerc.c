#include <stdio.h>


int main() {
  float maior_valor, menor_valor, user_input_valor;

  printf("Digite um numero: ");
  scanf("%f", &user_input_valor);

  maior_valor = user_input_valor;
  menor_valor = user_input_valor;

    
  while (user_input_valor >= 0) {
    printf("Digite um novo numero: ");
    scanf("%f", &user_input_valor);

    if (user_input_valor > maior_valor) {
      maior_valor = user_input_valor;
    }

    if (user_input_valor < menor_valor) {
      menor_valor = user_input_valor;
    }
  }

  printf("O menor valor eh %.1f e o maior valor eh %.1f\n", menor_valor, maior_valor);

  return 0;
}
