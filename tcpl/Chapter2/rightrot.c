#include <stdio.h>

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
    
    printf("Result: 0x%x\n", rightrot(x, p));
    return 0;
}
