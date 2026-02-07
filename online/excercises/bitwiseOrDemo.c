#include <stdio.h>

// Function to print a number in binary format
void print_binary(unsigned int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" ");  // Space every 4 bits for readability
    }
}

int main() {
  int a = 6;   // 0110
  int b = 3;   // 0011

  int result = a | b;
  printf("Result of %d|%d is %d\n",a,b, result ); // 7 (0111)
  printf("%d is ", a);
  print_binary(a,4);
  printf("\n");
  printf("%d is ", b);
  print_binary(b,4);
  printf("\n");
  printf("%d is ", result);
  print_binary(result,4);
  return 0;
}
