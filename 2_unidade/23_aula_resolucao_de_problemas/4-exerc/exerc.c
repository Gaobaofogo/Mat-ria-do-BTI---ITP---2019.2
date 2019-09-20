#include <stdio.h>
#include <string.h>
#include "exerc.h"

  char registry[20];
  char name[50];
  float p1;
  float p2;
  float p3;

int main() {
  Student students[5];
  int studentBiggestP1Note, studentHighetsAverage, studentLowestAverage;

  for (int i = 0; i < 5; i++) {
    printf("Digite a matricula do aluno %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(students[i].registry, 20, stdin);

    printf("Digite o nome do aluno %d: ", i+1);
    setbuf(stdin, NULL);
    fgets(students[i].name, 50, stdin);

    printf("Digite a primeira nota do aluno %d: ", i+1);
    scanf("%f", &students[i].p1);

    printf("Digite a segunda nota do aluno %d: ", i+1);
    scanf("%f", &students[i].p2);

    printf("Digite a terceira nota do aluno %d: ", i+1);
    scanf("%f", &students[i].p3);
  } 

  studentBiggestP1Note = findHighetsGradeP1(students);
  studentHighetsAverage = findHighestAverage(students);
  studentLowestAverage = findLowestAverage(students);

  printf("O aluno com maior nota p1 eh o %d", studentBiggestP1Note + 1);
  printf("O aluno com maior media eh o %d", studentHighetsAverage + 1);
  printf("O aluno com menor media eh o %d", studentLowestAverage + 1);

  printStudentResults(students);

  return 0;
}
