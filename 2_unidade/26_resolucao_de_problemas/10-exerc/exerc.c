#include <stdio.h>
#include "exerc.h"


/*
 * Finds the most appearing element in array v
 * and pass him the element to 'el'
 *
 * @param v[N] Int vector
 * @param *el ElementVector pointer
 * @return void
 */
void mostOcurrencyInArray(int v[N], ElementVector *el) {
  ElementVector auxV[N], mostAppearingElement;
  int lengthAuxV = 0;

  for (int i = 0; i < N; i++) {
    if (!(hasElement(auxV, lengthAuxV, v[i]))) {
      ElementVector element;
      element.value = v[i];
      element.occurences = 0;
      auxV[lengthAuxV] = element;
      lengthAuxV++;
    }
  }

  for (int j = 0; j < lengthAuxV; j++) {
    auxV[j].occurences = elementOcurrencesInArray(v, auxV[j].value);
  }

  mostAppearingElement = auxV[0];

  for (int k = 0; k < lengthAuxV; k++) {
    if (auxV[k].occurences > mostAppearingElement.occurences) {
      mostAppearingElement = auxV[k];
    }
  }

  (*el) = mostAppearingElement;
}


int main() {
  int v[N] = {5, 5, 15, 5, 5, 15, 8, 6, 15};
  ElementVector el;

  mostOcurrencyInArray(v, &el);

  printf("O numero que mais repetiu foi o %d com %d repeticoes\n",
          el.value,
          el.occurences);

  return 0;
}
