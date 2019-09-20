#include <stdio.h>
#include <math.h>


typedef struct {
  float x;
  float y;
} Point;

void printPoint(Point p) {
  printf("(%.2f ; %.2f)\n", p.x, p.y);
}

Point sumPoints(Point p1, Point p2) {
  Point p3 = {p1.x + p2.x, p1.y + p2.y};
  return p3;
}

Point subtractionPoints(Point p1, Point p2) {
  Point p3 = {p1.x - p2.x, p1.y - p2.y};
  return p3;
}

float pointsDistance(Point p1, Point p2) {
  Point p3 = subtractionPoints(p1, p2);
  float distance = sqrt(pow(p3.x, 2) + pow(p3.y, 2));

  return distance;
}

int main() {

  float distance;
  Point p1 = {5, 3}, p2 = {-15, -23}, p3;

  printPoint(p1);

  p3 = sumPoints(p1, p2);

  printPoint(p3);

  p3 = subtractionPoints(p1, p2);

  printPoint(p3);

  distance = pointsDistance(p1, p2);

  printf("A distancia entre os dois pontos eh: %.2f\n", distance);

  return 0;
}
