#include <stdio.h>


float convertBetweenKgAndPound(float weight, char unity);
float convertToPound(float km);
float convertToKg(float pound);


int main() {

  printf("%.2f\n", convertBetweenKgAndPound(50, 'K'));

  return 0;
}


float convertBetweenKgAndPound(float weight, char unity) {
  if (unity == 'K') {
    return convertToPound(weight);
  } else if (unity == 'P') {
    return convertToKg(weight);
  }
}

float convertToKg(float pound) {
  return pound * 0.45;
}

float convertToPound(float km) {
  return km / 0.45;
}
