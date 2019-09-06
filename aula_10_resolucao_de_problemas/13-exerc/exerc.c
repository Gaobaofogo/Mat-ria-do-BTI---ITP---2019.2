#include <stdio.h>


int main() {
  /*
   * Faca  um  programa  que  leia  vários  números,  calcule  e  mostre:
   * a.A  soma  dos  números  digitados - O
   * b.A  quantidade  de  números digitados - O
   * c.A  média  dos  números digitados - X
   * d.O  maior  número  digitado - X
   * e.O  menor  numero  digitado - X
   * f.A  média  dos  númerospares - X
   * g.A  média  dos  números  impares - X
   * h.Finalize  a  entrada  de  dados  caso  o  usuário informe  o  valor  0.
  */

  int input_usuario;
  float total_pares = 0.0, total_impares = 0.0;
  float qntd_nums_pares = 0.0, qntd_nums_impares = 0.0;
  float total = 0.0, qntd_nums_digitados = 0.0, maior_num = 0.0, menor_num = 0.0;
  
  printf("Digite o numero: ");
  scanf("%d", &input_usuario);

  maior_num = input_usuario;
  menor_num = input_usuario;

  while (input_usuario != 0) {
    total += input_usuario;
    qntd_nums_digitados++;

    if (input_usuario > maior_num) {
      maior_num = input_usuario;
    }
    if (menor_num > input_usuario) {
      menor_num = input_usuario;
    }

    if (input_usuario % 2 == 0) {
      total_pares += input_usuario;
      qntd_nums_pares++;
    } else {
      total_impares += input_usuario;
      qntd_nums_impares++;
    }

    printf("Digite o numero: ");
    scanf("%d", &input_usuario);
  }

  printf("A soma dos numeros eh %.1f\n", total);
  printf("A quantidade de numeros eh %.1f\n", qntd_nums_digitados);
  printf("A media dos numeros digitados eh %.1f\n", total / qntd_nums_digitados);
  printf("O menor numero digitado foi %.1f\n", menor_num);
  printf("O maior numero digitado foi %.1f\n", maior_num);
  printf("A media dos numeros pares eh %.1f\n", total_pares / qntd_nums_pares);
  printf("A media dos numeros impares eh %.1f\n", total_impares / qntd_nums_impares);

  return 0;
}
