#include <stdio.h>


int main() {
  float altura, peso;

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  if (altura < 1.2) {
    if (peso <= 60.0) {
      printf("A\n");
    } else if (peso <= 90) {
      printf("D\n");
    } else {
      printf("G\n");
    }
  } else if (altura <= 1.7) {
    if (peso <= 60.0) {
      printf("B\n");
    } else if (peso <= 90) {
      printf("E\n");
    } else {
      printf("H\n");
    }
  } else {
    if (peso <= 60.0) {
      printf("C\n");
    } else if (peso <= 90) {
      printf("F\n");
    } else {
      printf("I\n");
    }
  }

  return 0;
}
