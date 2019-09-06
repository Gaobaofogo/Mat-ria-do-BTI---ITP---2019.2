#include <stdio.h>


void printWeekDay(int n);


int main() {
  int user_input;

  printf("Digite um número e veja o dia da semana: ");
  scanf("%d", &user_input);

  while (user_input != 9) {
    printWeekDay(user_input);

    printf("Digite um número e veja o dia da semana: ");
    scanf("%d", &user_input);
  };
  return 0;
}


// It's void because don't return nothing, only print values
void printWeekDay(int n) {

  // For each day of week you can assign a 'case' on 'switch'
  // and still maintain readability
  switch (n) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda feira\n");
      break;
    case 3:
      printf("Terça feira\n");
      break;
    case 4:
      printf("Quarta feira\n");
      break;
    case 5:
      printf("Quinta feira\n");
      break;
    case 6:
      printf("Sexta feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Não compreendi seu pedido\n");
      break;
  }
}
