#include <stdio.h>


int main() {
  int user_input;

  printf("Digite um numero: ");
  scanf("%d", &user_input);

  printf("\n");
  printf("Usando 'for'\n");
  for(int i = 1; i <= user_input; i++){
    printf("%d\n", i);
  }

  printf("\n");
  printf("Usando 'while'\n");

  int j = 1;
  while(j <= user_input) {
    printf("%d\n", j);
    j++;
  }

  printf("\n");
  printf("Usando 'do while'\n");
  int k = 1;
  do {
    printf("%d\n", k);
    k++;
  } while (k <= user_input);

  return 0;
}
