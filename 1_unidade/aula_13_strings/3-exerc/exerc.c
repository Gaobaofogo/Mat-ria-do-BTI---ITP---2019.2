#include <stdio.h>
#include <string.h>


int main() {
  char v[] = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
  char user_input;
  int qntd_ocorrencias = 0;

  printf("Digite um caractere: ");
  scanf("%c", &user_input);


  for (int i = 0; v[i] != '\0'; i++) {
    if (v[i] == user_input) {
      qntd_ocorrencias++;
    }
  }

  printf("A quantidade de ocorrencias de %c eh de %d\n", user_input, qntd_ocorrencias);

  return 0;
}
