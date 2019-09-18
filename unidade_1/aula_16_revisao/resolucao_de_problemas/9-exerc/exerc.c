#include <stdio.h>


float calcGasolineConsumption(float gasoline, float km);
void printKmSituation(float x);


int main() {
  float kmPerL = calcGasolineConsumption(5, 25);

  printf("Km/l: %.2f\n", kmPerL);
  printKmSituation(kmPerL);

  return 0;
}


float calcGasolineConsumption(float gasoline, float km) {
  return km / gasoline;
}

void printKmSituation(float x) {
  if (x < 8.0) {
    printf("Venda o carro!\n");
  } else if (x <= 14.0) {
    printf("Econômico!\n");
  } else {
    printf("Super econômico!\n");
  }
}
