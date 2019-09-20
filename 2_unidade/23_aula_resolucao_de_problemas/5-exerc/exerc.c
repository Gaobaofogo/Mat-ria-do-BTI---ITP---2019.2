#include <stdio.h>
#include <string.h>
#include "exerc.h"


int main() {
  Student students[2];

  for(int i = 0; i < 2; i++) {
    printf("Digite a matricula do aluno %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(students[i].registry, 20, stdin);

    printf("Digite o nome do aluno %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(students[i].name, 20, stdin);

    printf("Digite o codigo da disciplina: ");
    setbuf(stdin, NULL);
    fgets(students[i].discipline_code, 20, stdin);

    printf("Digite a primeira nota do aluno %d: ", i+1);
    scanf("%f", &students[i].n1);

    printf("Digite a segunda nota do aluno %d: ", i+1);
    scanf("%f", &students[i].n2);
  }

  for(int j = 0; j < 2; j++) {
    printf(
      "Media do aluno %d: %f\n", 
      j+1, 
      (students[j].n1 + students[j].n2 * 2.0)/3.0
    );
  }

  return 0;
}
