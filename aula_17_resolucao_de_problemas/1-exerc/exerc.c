#include <stdio.h>


char signum(int n);


int main() {
  int user_input;
  char sig;

  printf("Digite o numero: ");
  scanf("%c", &user_input);

  sig = signum(user_input);

  printf("A resposta eh '%c'\n", sig);

  return 0;
}

char signum(int n) {
  if (n <= 0)
    return 'N';

  return 'P';
}
