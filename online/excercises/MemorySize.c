#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("int is size %zu\n", sizeof(myInt));
  printf("float is size %zu\n", sizeof(myFloat));
  printf("double is size %zu\n", sizeof(myDouble));
  printf("char is size %zu\n", sizeof(myChar));
  
  return 0;
}
