#include <stdio.h>
#include <locale.h>


void swapValues (int *a, int *b);


int main() {
  setlocale(LC_ALL, "Portuguese_Brasil");

  int a = 37, b = 22;

  printf("O valor inicial de a é %d\n", a);
  printf("O valor inicial de b é %d\n", b);
  swapValues(&a, &b);
  printf("O valor final de a é %d\n", a);
  printf("O valor final de b é %d\n", b);

  return 0;
}

void swapValues (int *a, int *b) {
  int c;
  c = *a;
  *a = *b;
  *b = c;
}
