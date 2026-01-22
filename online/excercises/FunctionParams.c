#include <stdio.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}

int main() {
  myFunction("Karls", 15);
  myFunction("Kars", 13);
  myFunction("Kaps", 70);
  return 0;
}
