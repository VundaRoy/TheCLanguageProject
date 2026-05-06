#include <stdio.h>
// Function to print a number in binary format
void display_binary(unsigned int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" ");  // Space every 4 bits for readability
    }
}
unsigned rightrot(unsigned x, int n) {
    int wordlength = sizeof(unsigned) * 8; // Calculate total bits (e.g., 32)
    n = n % wordlength; // Handle rotations larger than the word size
    
    /* 
       1. (x >> n) shifts the number right, bits fall off the end.
       2. (x << (wordlength - n)) takes those falling bits and 
          pushes them to the far left.
       3. Combining them with | merges the two parts.
    */
    return (x >> n) | (x << (wordlength - n));
}
int main() {
    unsigned x = 255; 
    int p = 40;
    
    printf("Result: rightrot(%d, %d) 0x%x\n", x, p, rightrot(x, p));
    printf("p is ");display_binary(p,8);
    printf("\n");
    printf("rightrot is ");display_binary(rightrot(x, p),8);
    return 0;
}
