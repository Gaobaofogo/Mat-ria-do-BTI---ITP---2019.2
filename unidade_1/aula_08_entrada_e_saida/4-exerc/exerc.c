#include <stdio.h>


int main() {
  int escolha;

  printf("Digite '1' para quadrado e qualquer outro numero para pinheiro: ");
  scanf(" %d", &escolha);

  if (escolha == 1) {
    printf("XXXXXXXX\n");
    printf("X      X\n");
    printf("X      X\n");
    printf("XXXXXXXX\n");
  } else {
   printf("       X       \n"); 
   printf("      XXX      \n"); 
   printf("     XXXXX     \n"); 
   printf("    XXXXXXX    \n"); 
   printf("   XXXXXXXXX   \n"); 
   printf("  XXXXXXXXXXX  \n"); 
   printf(" XXXXXXXXXXXXX \n"); 
   printf("XXXXXXXXXXXXXXX\n"); 
   printf("      XXX      \n");
   printf("      XXX      \n");
   printf("     XXXXX     \n");
  }

  return 0;
}
