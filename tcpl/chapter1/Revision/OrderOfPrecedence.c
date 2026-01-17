#include <stdio.h>

int main() {
  int result1 = 2 + 20 * 4;     // 2 + 12 = 14  
  int result2 = (2 + 3) * 4;   // 5 * 4 = 20
  int result3 = 4 - 40 / 4;
  int result4 = 5 + 20 % 3;

  printf("2 + 20 * 4 = %d\n", result1);
  printf("(2 + 3) * 4 = %d\n", result2);
  printf("4 - 40 / 4 = %d\n", result3);
  printf("5 + 20 % 2 = %d", result4);
  return 0;
}
