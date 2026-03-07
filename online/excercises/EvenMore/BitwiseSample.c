#include <stdio.h>
// Function to print a number in binary format
void display_binary(unsigned int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" ");  // Space every 4 bits for readability
    }
}

int main() {
  int a = 6;   // 0110
  int b = 3;   // 0011

  int result = a ^ b;
  printf("%d in binary is ", a); display_binary(a,4); printf("\n");
  printf("%d in binary is ", b); display_binary(b,4); printf("\n");
  printf("Result: %d\n", result); // 5 (0101)
  return 0;
}
