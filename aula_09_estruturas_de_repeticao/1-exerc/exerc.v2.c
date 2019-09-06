#include <stdio.h>


int main() {
  int input_usuario;

  printf("Caro usuario, digite um numero e veja a magica acontecer: ");
  scanf("%d", &input_usuario);

  int i = 0;

  while(i <= input_usuario) {
    printf("%d\n", i);
    i++;
  }


  return 0;
}
