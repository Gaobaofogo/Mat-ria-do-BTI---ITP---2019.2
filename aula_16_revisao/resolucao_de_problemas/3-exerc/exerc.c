#include <stdio.h>


void imprimirData(int dia, int mes, int ano);


int main() {

  imprimirData(13, 12, 1902);

  return 0;
}


void imprimirData(int dia, int mes, int ano) {
  printf("%d de %d de %d\n", dia, mes, ano);
}
