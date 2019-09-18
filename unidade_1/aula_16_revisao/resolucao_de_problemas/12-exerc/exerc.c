#include <stdio.h>


float convertKelvinToCelcius(float K);


int main() {
  
  printf("%.2f\n", convertKelvinToCelcius(293.15));

  return 0;
}


float convertKelvinToCelcius(float K) {
  return K - 273.15;
}
