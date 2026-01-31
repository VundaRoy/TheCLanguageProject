#include <stdio.h>

/* setbits: returns x with the n bits that begin at position p set
   to the rightmost n bits of y, leaving other bits unchanged. */
unsigned setbits(unsigned x, int p, int n, unsigned y) {
    // 1. Create a mask to clear n bits in x starting at position p
    // 2. Extract the rightmost n bits from y and shift them to position p
    // 3. Combine them using bitwise OR
    return (x & ~((~(~0u << n)) << (p + 1 - n))) | ((y & ~(~0u << n)) << (p + 1 - n));
}

int main() {
    unsigned x = 0xB5; // 1011 0101
    unsigned y = 0x2B; // 0010 1011
    int p = 5, n = 3;
    
    printf("Result: 0x%x\n", setbits(x, p, n, y));
    return 0;
}
