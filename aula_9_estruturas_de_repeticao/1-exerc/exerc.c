#include <stdio.h>


int main() {
  int input_usuario;

  printf("Caro usuario, digite um numero e veja a magica acontecer: ");
  scanf("%d", &input_usuario);

  for(int i = 0; i <= input_usuario; i++) {
    printf("%d\n", i);
  }


  return 0;
}
