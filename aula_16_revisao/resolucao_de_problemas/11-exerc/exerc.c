#include <stdio.h>


float convertFahrenheitToCelcius(float F);


int main() {
  
  printf("%.2f\n", convertFahrenheitToCelcius(95.0));

  return 0;
}


float convertFahrenheitToCelcius(float F) {
  return 5.0 * ((F - 32.0) / 9.0);
}
