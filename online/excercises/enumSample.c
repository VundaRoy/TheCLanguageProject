#include <stdio.h>

enum Level {
  LOW,
  MEDIUM,
  HIGH
};
  
int main() {
  // Create an enum variable and assign a value to it
  enum Level med = MEDIUM;
  enum Level low = LOW;
  enum Level high = HIGH;
 
  // Print the enum variable
  printf("%d, %d, %d", low, med, high);
  
  return 0;
}
