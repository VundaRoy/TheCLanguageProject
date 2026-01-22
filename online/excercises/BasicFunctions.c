#include <stdio.h>

// Create a function
void myFunction() {
  printf("Called function!\n");
}
// Create a function
void addFunction(int i, int j) {
  printf("%d and %d is %d", i, j, i+j);
}

int main() {
  myFunction(); // call the function
  addFunction(4,5);
  return 0;
}
