
//Read number from string
#include <stdio.h>
#include <stdlib.h>

int main() {
  char str[] = "5.25% above average";
  float amount = atof(str);
  printf("%f", amount);
  return 0;
}
