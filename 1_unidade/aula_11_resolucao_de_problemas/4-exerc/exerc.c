#include <stdio.h>


int main() {
  int Bool = 1, dia;

  do {
   printf("Digite o numero e veja o dia da semana: ");
   scanf("%d", &dia);

   switch (dia) {
     case 1:
       printf("Domingo\n");
       break;
     case 2:
       printf("Segunda feira\n");
       break;
     case 3:
       printf("Terca feira\n");
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
       printf("Sabado\n");
       break;
     case 9:
       Bool = 0;
       break;
     default:
       printf("Opcao invalida\n");
       break;
   }
  } while (Bool);

  return 0;
}
