#include <stdio.h>


float printConversion(float distance, char unity);
float convertToKm(float miles);
float convertToMiles(float km);


int main() {
  float input_distance;
  char input_unity;

  printf("Digite a distancia: ");
  scanf("%f", &input_distance);

  printf("Digite a unidade a ser convertida: ");
  scanf(" %c", &input_unity);

  printf("Resultado da conversao: %.2f\n", printConversion(input_distance, input_unity));

  return 0;
}

float printConversion(float distance, char unity) {
  if(unity == 'K') {
    return convertToMiles(distance);
  } else if (unity == 'M') {
    return convertToKm(distance);
  }
}

float convertToKm(float miles) {
  return miles * 1.61;
}

float convertToMiles(float km) {
  return km/1.61;
}
