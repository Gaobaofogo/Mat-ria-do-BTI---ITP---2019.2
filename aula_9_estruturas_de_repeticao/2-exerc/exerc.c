#include <stdio.h>


int main(){
  int i = 0;
  float total = 0, input_usuario, qntd_de_numeros;

  printf("Digite a quantidade de numeros: ");
  scanf("%f", &qntd_de_numeros);



  while(i < qntd_de_numeros) {
    printf("Digite o '%d' numero: ", i + 1);
    scanf("%f", &input_usuario);

    total += input_usuario;

    i++;
  }

  printf("A media eh de: %.1f\n", (total / qntd_de_numeros));

  return 0;
}
