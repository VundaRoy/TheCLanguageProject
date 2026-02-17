#include <stdio.h>

enum Temperature {
  FREEZING = -10,
  COLD = 1,
  COOL = 14,
  WARM = 25,
  HOT = 30,
  SCORCHER = 41
};
  
int main() {
  enum Temperature myVar = HOT;
  printf("%d", FREEZING);
  for(enum Temperature temp = FREEZING; temp < 20; temp++)
  {
     printf("Temp value: %d\n", temp);
  }

  return 0;
}
