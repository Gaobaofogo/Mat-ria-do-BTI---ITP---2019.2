#include <stdio.h>


int main() {
  float nota_aline  = 9.0;
  float nota_mario  = 10.0;
  float nota_sergio = 4.5;
  float nota_paulo  = 7.0;

  printf("ALUNO(A)\tNOTA\n");
  printf("========\t=====\n");
  printf("ALINE \t\t%*.1f\n", nota_aline, 4);
  printf("MARIO \t\t%*.1f\n", nota_mario, 4);
  printf("SERGIO \t\t%*.1f\n", nota_sergio, 4);
  printf("PAULO \t\t%*.1f\n", nota_paulo, 4);

  return 0;
}
