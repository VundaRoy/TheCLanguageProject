#include <stdio.h>
void display_binary(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }

    int binaryNum[32]; // Array to store binary digits (assuming 32 bits for int)
    int i = 0;
    
    // Store remainders in reverse order
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // Print the array in the correct order (reverse of storage)
    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");
}

int main() {
  int a = 6;   // 0110
  int b = 3;   // 0011

  int result = a ^ b;
  printf("%d in binary is \n", a); display_binary(a);
  printf("%d in binary is \n", b); display_binary(b);
  printf("Result: %d\n", result); // 5 (0101)
  return 0;
}
