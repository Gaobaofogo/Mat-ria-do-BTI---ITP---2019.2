#include <stdio.h>


void triangleFloyd(int n);


int main() {

  triangleFloyd(6);

  return 0;
}


// I use void because the function don't return nothing,
// only print numbers
void triangleFloyd(int n) {
  // Variable used to print the numbers
  int count = 1;

  // The first 'for' i use to say how many numbers will be displayed
  for (int i = 1; i <= n; i++) {
    // The second 'for' i use to display the quantity of numbers
    // governed by 'i'
    for (int k = 0; k < i; k++) {
      // Display the number and automatically plus 1 to 'count'
      printf("%d ", count++); 
    }

    // Drop a line when the 'for' finish displaying a line of numbers
    printf("\n");
  }
}
