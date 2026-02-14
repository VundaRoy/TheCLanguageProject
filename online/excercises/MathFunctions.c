#include <stdio.h>
#include <math.h>

int main() {
  printf("sqrt(16) %f\n", sqrt(16));
  printf("roundf(1.4) %f\n", roundf(1.4));
  printf("roundf(1.49999999) %f\n", roundf(1.49999999));
  printf("roundf(1.49) %f\n", roundf(1.49));
  printf("roundf(1.8) %f\n", roundf(1.8));
  printf("ceil(1.4) %f\n", ceil(1.4));
  printf("ceil(1.0000011) %f\n", ceil(1.0000011));
  printf("floor(25.5) %f\n", floor(25.5));
  printf("floor(25.99) %f\n", floor(25.99));
  printf("floor(25.9999999) %f\n", floor(25.9999999));
  printf("floor(25.2) %f\n", floor(25.2));
  printf("pow(4,3) %f", pow(4, 3));
  return 0;
}
