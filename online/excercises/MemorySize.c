#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("int is size %zu\n", sizeof(myInt));  //4
  printf("float is size %zu\n", sizeof(myFloat));  //4
  printf("double is size %zu\n", sizeof(myDouble));  //8
  printf("char is size %zu\n", sizeof(myChar));  //1
  
  return 0;
}
