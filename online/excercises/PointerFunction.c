#include <stdio.h>

int add(int a, int b) {
  return a + b;
}
int mult(int a, int b) {
  return a * b;
}

int main() {
  int (*ptr)(int, int) = add;
  int (*ptr1)(int, int) = mult;
  int result = ptr(5, 3);
  int result1 = ptr1(5, 3);
  printf("Result of ptr(5,3) %d\n", result);
  printf("Result of ptr1(5,3) %d\n", result1);
  return 0;
}
