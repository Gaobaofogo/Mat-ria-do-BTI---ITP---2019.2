#include <stdio.h>
#include <string.h>


struct Identificacao {
  char nome[50];
  int  idade;
  char endereco[50];
};

int main() {
  struct Identificacao identificacao;

  printf("Digite o seu nome: ");
  setbuf(stdin, NULL);
  fgets(identificacao.nome, 50, stdin);

  printf("Digite seu endereco: ");
  setbuf(stdin, NULL);
  fgets(identificacao.endereco, 50, stdin);

  printf("Digite sua idade: ");
  scanf("%d", &identificacao.idade);

  printf("Minha idade eh %d\n", identificacao.idade);
  printf("Meu nome eh %s", identificacao.nome);
  printf("Meu endereco eh %s", identificacao.endereco);

  return 0;
}
