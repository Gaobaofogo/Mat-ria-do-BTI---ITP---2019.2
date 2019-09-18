#include <stdio.h>


int main() {
  int operacao, True = 1;

  do {
    printf("\n");
    printf("Digite a conversão a ser realizada\n");
    printf("  1) Fahrenheit -> Celcius\n");
    printf("  2) Celcius -> Fahrenheit\n");
    printf("  3) Celcius -> Kelvin\n");
    printf("  4) Kelvin  -> Celcius\n");
    printf("  5) Sair\n");
    printf("\nDigite a opção: ");
    scanf("%d", &operacao);

    switch (operacao) {
      case 1:
        printf("Fahrenheit -> Celcius");
        break;
      case 2:
        printf("Celcius -> Fahrenheit\n");
        break;
      case 3:
        printf("Celcius -> Kelvin\n");
        break;
      case 4:
        printf("Kelvin  -> Celcius\n");
        break;
      case 5:
        printf("Ate mais\n");
        True = 0;
        break;
      default:
        printf("Nao conheco essa operacao\n");
        break;
    }
  } while(True);

  return 0;
}
