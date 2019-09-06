#include <stdio.h>


int table();
float convertCelciusToFahrenheit(float celcius);
float convertFahrenheitToCelcius(float F);
float convertKelvinToCelcius(float K);
float convertCelciusToKelvin(float C);


int main() {
  int user_input;

  user_input = table();

  while(user_input != 5) {
    switch (user_input) {
      case 1:
        printf("F -> C: %.2f\n", convertFahrenheitToCelcius(95.0));
        break;
      case 2:
        printf("C -> F: %.2f\n", convertCelciusToFahrenheit(35.0));
        break;
      case 3:
        printf("C -> K: %.2f\n", convertCelciusToKelvin(20.0));
        break;
      case 4:
        printf("K -> C: %.2f\n", convertKelvinToCelcius(293.15));
        break;
      default:
        printf("Number not understood\n");
        break;
    }

    user_input = table();
  } 
  return 0;
}

int table() {
  int user_input;

  printf("Digite a conversao a ser realizada:\n");
  printf("\t1) Fahrenheit -> Celcius\n");
  printf("\t2) Celcius -> Fahrenheit\n");
  printf("\t3) Celcius -> Kelvin\n");
  printf("\t4) Kelvin -> Celcius\n");
  printf("\t5) Sair\n");
  scanf("%d", &user_input);

  return user_input;
}

float convertCelciusToFahrenheit(float celcius) {
  return celcius * (9.0/5.0) + 32.0;
}

float convertFahrenheitToCelcius(float F) {
  return 5.0 * ((F - 32.0) / 9.0);
}

float convertKelvinToCelcius(float K) {
  return K - 273.15;
}

float convertCelciusToKelvin(float C) {
  return C + 273.15;
}
