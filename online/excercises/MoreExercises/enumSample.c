#include <stdio.h>

enum Level {
  ICE,
  ALPINE,
  TUNDRA,
  TAIGA,
  STEPPE,
  SAVANNAH,
  RAINFOREST,
  DESERT
};
  
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = STEPPE;
 
  // Print the enum variable
  printf("%d", myVar);
  
  return 0;
}
