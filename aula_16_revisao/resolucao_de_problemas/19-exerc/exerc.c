#include <stdio.h>


void printFloydTriangleWithSymbols(int n, char symbol);


int main() {

  printFloydTriangleWithSymbols(5, '!');

  return 0;
}

void printFloydTriangleWithSymbols(int n, char symbol) {
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i; j++) {
      printf("%c ", symbol);
    }

    printf("\n");
  }
}
