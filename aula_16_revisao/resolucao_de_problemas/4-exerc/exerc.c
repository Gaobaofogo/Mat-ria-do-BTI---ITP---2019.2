#include <stdio.h>


int signum(int x);


int main() {
  int x = -3, sig;

  sig = signum(x);

  printf("Signum of %d: %d\n", x, sig);

  return 0;
}


int signum(int x) {
  if (x > 0) {
    return 1;
  } else if (x == 0) {
    return 0;
  } else {
    return -1;
  }
}
