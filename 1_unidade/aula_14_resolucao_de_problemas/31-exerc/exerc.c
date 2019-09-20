#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
  char v[100];

  printf("Digite a string: ");
  setbuf(stdin, NULL);
  fgets(v, 100, stdin);

  for (int i = 0; v[i] != '\0'; ++i) {
    for (int j = 0; j < i; j++) {
      printf("%c", v[j]);
    }
    printf("\n");
  }

  for (int k = strlen(v) - 2; k >= 0; k--) {
    for (int w = 0; w < k; w++) {
      printf("%c", v[w]);
    }

    printf("\n");
  }

  return 0;
}
