#include <stdio.h>

float convertToKm(float velocity);
float convertToMs(float velocity);
float printSpeed(float velocity, char type_speed);


int main() {
  float speed_input;
  char type_speed_input;

  printf("Digite a velocidade: ");
  scanf("%f", &speed_input);

  printf("Digite a conversão a ser feita: ");
  scanf(" %c", &type_speed_input);

  printf("A velocidade eh de %.2f\n", printSpeed(speed_input, type_speed_input));

  return 0;
}

float printSpeed(float velocity, char type_speed) {
  if (type_speed == 'K') {
    return convertToMs(velocity);
  } else if (type_speed == 'M') {
    return convertToKm(velocity);
  }
}

float convertToKm(float velocity) {
  return velocity * 3.6;
}

float convertToMs(float velocity) {
  return velocity / 3.6;
}
