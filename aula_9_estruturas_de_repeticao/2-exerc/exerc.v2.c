#include <stdio.h>


int main(){
  float total = 0, input_usuario, qntd_de_numeros;

  printf("Digite a quantidade de numeros: ");
  scanf("%f", &qntd_de_numeros);



  for(int i = 0; i < qntd_de_numeros; i++) {
    printf("Digite o '%d' numero: ", i + 1);
    scanf("%f", &input_usuario);

    total += input_usuario;
  }

  printf("A media eh de: %.1f\n", (total / qntd_de_numeros));

  return 0;
}
