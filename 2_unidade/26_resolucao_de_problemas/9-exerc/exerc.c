#include <stdio.h>
#include <math.h>

#define p 3


/*
 * Gives back the result of area and volume
 * of sphere in '*area' and '*volume' respectively
 *
 * @param R Radius of sphere
 * @param *area Pointer who will receive the value of sphere area
 * @param *volume Pointer who will receive the value of sphere volume
 * @return void
 */
void calc_esfera(float R, float *area, float *volume) {
  *area = 4 * p * pow(R, 2);
  *volume = (4.0/3.0) * p * pow(R, 3);
}

int main() {
  float R = 5, area, volume;

  calc_esfera(R, &area, &volume);

  printf("Area da esfera: %.2f\n", area);
  printf("Volume da esfera: %.2f\n", volume);

  return 0;
}
