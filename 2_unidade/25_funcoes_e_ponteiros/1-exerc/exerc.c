#include <stdio.h>
#include <string.h>
#include "exerc.c"


int main() {
  char v[50], *ptrv;

  printf("Digite a palavra: ");
  setbuf(stdin, NULL);
  fgets(v, 50, stdin);

  ptrv = v;

  printf("Primeira posicao: %c\n", ptrv[0]);
  
  ptrv++;

  printf("Segunda posicao:  %c\n", ++(*ptrv));
  // char *str = strdup(" a b c ");

  // printf("%s\n", str);

  // char *write = str, *read = str;
  // do {
  //      if (*read != ' ')
  //               *write++ = *read;
  // } while (*read++);

  // printf("%s\n", str);

  return 0;
}
