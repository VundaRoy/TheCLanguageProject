#include <stdio.h>
// Function to print a number in binary format
void display_binary(unsigned int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" ");  // Space every 4 bits for readability
    }
}

int main() {
  int a = 8;   
  int b = 5;  

  int result1 = ~ a;
  int result2 = ~ b;
  printf("%d in binary is ", a); display_binary(a,4); printf("\n");
  printf("%d in binary is ", b); display_binary(b,4); printf("\n");
  printf("Result: %d in binary is ", result1); display_binary(result1,4); printf("\n");
  printf("Result: %d in binary is ", result2); display_binary(result2,4); printf("\n");
  return 0;
}
