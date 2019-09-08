#include <stdio.h>


void getGrades(int v[7]);
void filterNotes(int v1[7], int v2[5]);
void printNotes(int v[5]);


int main() {
  int v1[7], v2[5];

  getGrades(v1);
  filterNotes(v1, v2);
  printNotes(v2);

  return 0;
}


void getGrades(int v[7]) {
  for(int i = 0; i < 7; i++) {
    printf("Digite a nota %d: ", i + 1);
    scanf("%d", &v[i]);
  }
}

void filterNotes(int v1[7], int v2[5]) {
  int biggest_value = -1, smaller_value = 20;
  int biggest_index, smaller_index, counter = 0;

  for(int i = 0; i < 7; i++) {
    if (v1[i] > biggest_value) {
      biggest_value  =  v1[i];
      biggest_index  =  i;
    } else if (smaller_value > v1[i]) {
      smaller_value = v1[i];
      smaller_index = i;
    }
  }

  for(int j = 0; j < 7; j++) {
    if (j == biggest_index || j == smaller_index) {
      continue;
    }

    v2[counter] = v1[j];
    counter++;
  }
}

void printNotes(int v[5]) {
  for(int i  = 0; i < 5; i++) {
    printf("Nota %d: %d\n", i + 1, v[i]);
  }
}
