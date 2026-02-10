#include <stdio.h>

typedef float Temperature;

int main() {
  printf("Sizeof typdef float is: %zu\n", sizeof(Temperature));
  Temperature today = 25.522;
  Temperature tomorrow = 18.612;

  printf("Today: %.2f C\n", today);
  printf("Tomorrow: %.3f C\n", tomorrow);

  return 0;
}
