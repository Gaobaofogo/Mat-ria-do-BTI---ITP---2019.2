#include <stdio.h>
#include <string.h>
#include "exerc.h"


int main() {
  struct Aluno alunos[5];

  for(int i = 0; i < 5; i++) {
    printf("Digite o nome: ");
    setbuf(stdin, NULL);
    fgets(alunos[i].nome, 50, stdin);

    printf("Digite o numero de matricula: ");
    setbuf(stdin, NULL);
    fgets(alunos[i].numero_de_matricula, 20, stdin);

    printf("Digite o endereco: ");
    setbuf(stdin, NULL);
    fgets(alunos[i].curso, 30, stdin);
  }

  for(int j = 0; j < 5; j++) {
    printf("Nome:      %s", alunos[j].nome);
    printf("Matricula: %s", alunos[j].numero_de_matricula);
    printf("Curso:     %s", alunos[j].curso);
  }

  return 0;
}
