#include <stdio.h>

inline int add(int a, int b) {
  return a * b;
}

int main() {
  printf("Inline call add(5,3) %d", add(5, 3));
  return 0;
}
