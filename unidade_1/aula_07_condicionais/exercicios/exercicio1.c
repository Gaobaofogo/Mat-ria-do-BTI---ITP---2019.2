#include <stdio.h>

int main(int argc, char *argv[])
{
  float nota1, nota2, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  media = (nota1 + nota2) / 2;

  printf("A media do aluno e: %f\n", media);

  return 0;
}
