#include <stdio.h>


void printLineWithSymbol(char symbol, int n);


int main() {

  printLineWithSymbol('>', 15);

  return 0;
}


void printLineWithSymbol(char symbol, int n) {
  for (int i = 0; i < n; i++) {
    printf("%c", symbol);
  }

  printf("\n");
}
