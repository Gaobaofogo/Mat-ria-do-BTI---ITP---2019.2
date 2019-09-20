#include <stdio.h>


int summation(int n);


int main() {
  
  printf("%d\n", summation(5));

  return 0;
}

int summation(int n) {
  if (n < 0)
    return -1;

  int total = 0;

  for(int i = 1; i <= n; i++) {
    total += i;
  }

  return total;
}
