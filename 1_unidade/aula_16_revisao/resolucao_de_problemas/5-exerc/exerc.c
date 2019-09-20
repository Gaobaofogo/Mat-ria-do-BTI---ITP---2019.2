#include <stdio.h>


int convertTimeToSeconds(int hour, int minutes, int seconds);


int main() {
  int timeInSeconds;

  timeInSeconds = convertTimeToSeconds(17, 50, 28);

  printf("Time in seconds: %d\n", timeInSeconds);

  return 0;
}

int convertTimeToSeconds(int hour, int minutes, int seconds) {
  return seconds + minutes * 60 + hour * 60 * 60;
}
