#include <stdio.h>


void printGrowingEvens(int n);
void printDecreasingEvens(int n);



int main() {
  int user_input = 1;

  while (user_input != 0) {
    do {
      printf("Digite o numero: ");
      scanf("%d", &user_input);
    } while (user_input % 2 != 0);

    if (user_input == 0) {
      break;
    }

    printGrowingEvens(user_input);
    printDecreasingEvens(user_input);
  }

  return 0;
}


void printGrowingEvens(int n) {
  for (int i = 0; i <= n; i += 2) {
    printf("%d ", i);
  }

  printf("\n");
}

void printDecreasingEvens(int n) {
  for (int i = n; i >= 0; i -= 2) {
    printf("%d ", i);
  }

  printf("\n");
}
