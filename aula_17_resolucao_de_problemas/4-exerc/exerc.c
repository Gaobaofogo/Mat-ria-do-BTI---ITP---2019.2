#include  <stdio.h>


void displayResult(int v[6]);
void receiveVotes(int total_votes, int v[6]);
void percentNullVotes(float total_votes, float null_votes);
void percentWhiteVotes(float total_votes, float white_votes);


int main() {
  int total_votes, v[] = {0, 0, 0, 0, 0, 0};

  printf("Digite o total de votos: ");
  scanf("%d", &total_votes);

  receiveVotes(total_votes, v);
  displayResult(v);
  percentNullVotes(total_votes, v[5]);
  percentWhiteVotes(total_votes, v[4]);

  return 0;
}

void receiveVotes(int total_votes, int v[6]) {
  int vote;
  for(int i = 0; i < total_votes; i++) {
    printf("Digite qual candidato deseja votar: ");
    scanf("%d", &vote);

    switch(vote) {
      case 1:
        v[0] += 1;
        break;
      case 2:
        v[1] += 1;
        break;
      case 3:
        v[2] += 1;
        break;
      case 4:
        v[3] += 1;
        break;
      case 5:
        v[4] += 1;
        break;
      case 6:
        v[5] += 1;
        break;
      default:
        printf("Numero desconhecido");
    }
  } 
}

void displayResult(int v[6]) {
  for (int j = 0; j < 6; j++) {
    if (j < 4) {
      printf("Candidato %d: %d\n", j + 1, v[j]);
    } else if (j == 4) {
      printf("Votos em branco: %d\n", v[4]);
    } else {
      printf("Votos nulos: %d\n", v[5]);
    }
  }
}

void percentNullVotes(float total_votes, float null_votes) {
  printf("Porcentagem de nulos: %.2f%%\n", 100.0 * (null_votes / total_votes));
}

void percentWhiteVotes(float total_votes, float white_votes) {
  printf("Porcentagem de brancos: %.2f%%\n", 100.0 * (white_votes / total_votes));
}

