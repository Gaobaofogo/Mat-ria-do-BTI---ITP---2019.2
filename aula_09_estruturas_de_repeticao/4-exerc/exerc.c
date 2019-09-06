#include <stdio.h>


int main(){
  int input_usuario;

  do {
    printf("Digite um valor: ");
    scanf("%d", &input_usuario);
  } while (input_usuario < 1 || input_usuario > 5);

  printf("Meus parabens, vc digitou certo :)\n");

  return 0;
}
