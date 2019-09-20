#include <stdio.h>
#include <string.h>


int main() {
  char v[1000];

  printf("Digite a frase, se for capaz: ");
  setbuf(stdin, NULL);
  fgets(v, sizeof(v), stdin);

  for (int i = strlen(v); i >= 0; i--)
    printf("%c", v[i]);

  printf("\n");

  return 0;
}
