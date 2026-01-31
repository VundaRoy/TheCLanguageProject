#include <stdio.h>

unsigned invert(unsigned x, int p, int n) {
    /* 
       1. Create a mask of n bits: ~(~0 << n)
       2. Move the mask to position p: << (p + 1 - n)
       3. Use XOR (^) to flip bits where the mask is 1
    */
    return x ^ (~(~0u << n) << (p + 1 - n));
}
int main() {
    unsigned x = 182; // 10110110
    int p = 4, n = 3;
    
    printf("Result: 0x%x\n", invert(x, p, n));
    return 0;
}
