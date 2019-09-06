#include <stdio.h>


int main() {
  int num_input_usuario, divisor = 1, divisores = 0;

  printf("Digite o numero e veremos a quantidade de divisores: ");
  scanf("%d", &num_input_usuario);

  while(divisor <= num_input_usuario) {
    if (num_input_usuario % divisor == 0) {
      divisores +=  1;
    }

    divisor++;
  }

  printf("O numero '%d' possui %d divisores\n", num_input_usuario, divisores);

  return 0;
}
