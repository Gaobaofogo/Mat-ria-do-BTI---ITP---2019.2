#include <stdio.h>


int main() {
  int user_input_quantidade;
  float maior_valor, menor_valor, user_input_valor;

  printf("Diga quantos numeros deseja: ");
  scanf("%d", &user_input_quantidade);

  if (user_input_quantidade) {
    printf("Digite um numero: ");
    scanf("%f", &user_input_valor);

    maior_valor = user_input_valor;
    menor_valor = user_input_valor;

    for (int i = 1; i < user_input_quantidade; i++) {
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
  }

  return 0;
}
