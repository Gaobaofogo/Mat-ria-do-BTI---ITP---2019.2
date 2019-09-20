#include <stdio.h>
#include <string.h>


int main() {
  char v[1000];
  int tamanho = 0;

  printf("Digite uma frase: ");
  setbuf(stdin, NULL);
  fgets(v, sizeof(v), stdin);

  for (int i = 0; v[i] != '\0'; i++)
    tamanho++;

  printf("O tamanho da string eh de  %d\n", tamanho);
  printf("O tamanho via strlen eh de %d\n", strlen(v));

  return 0;
}
