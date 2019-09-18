#include <stdio.h>


float aritmeticAverage(float x, float y, float z);
float weightedAverage(float x, float y, float z);
float averageCalc(float x, float y, float z, char typeCalc);


int main() {
  float average;

  average = averageCalc(9.0, 5.0, 10.0, 'A');

  printf("Average: %2.f\n", average);

  return 0;
}

float averageCalc(float x, float y, float z, char typeCalc) {
  if (typeCalc == 'A') {
    return aritmeticAverage(x, y, z);
  } else if (typeCalc == 'P') {
    return weightedAverage(x, y, z);
  }
}

float aritmeticAverage(float x, float y, float z) {
  return (x + y + z) / 3.0;
}
float weightedAverage(float x, float y, float z) {
  return (x * 5.0 + y * 3.0 + z * 2.0) / (5.0 + 3.0 + 2.0);
}
