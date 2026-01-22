#include <stdio.h>

// Global variable x
int x = 15;

void myFunction() {
  // We can use x here
  printf("In function the value is %d\n", x);
}

int main() {
  myFunction();

  // We can also use x here
  printf("While in main it is also %d\n", x);
  return 0;
}
