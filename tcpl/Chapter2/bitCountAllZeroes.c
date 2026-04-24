#include <stdio.h>
int bitcount(unsigned x)
{
  int b = 0;
    // Calculate total bits (usually 32)
    int iterations = sizeof(unsigned) * 8; 
    
    for (int i = 0; i < iterations; i++) {
        if (!(x & 01)) // Check if the bit is NOT 1
            b++;
        x >>= 1;
    }
    return b;   
}
int main() {
  printf("Bitcount(%d) is %d\n",80000000, bitcount(80000000));
  printf("Bitcount(%d) is %d\n",800000, bitcount(800000));
  printf("Bitcount(%d) is %d\n",800, bitcount(800));
  printf("Bitcount(%d) is %d\n",8, bitcount(8));
  printf("Bitcount(%d) is %d\n",1, bitcount(1));
  printf("Bitcount(%d) is %d\n",0, bitcount(0));
  printf("Bitcount(%d) is %d\n",-1, bitcount(-1));
  printf("Bitcount(%d) is %d\n",-5, bitcount(-5));
  printf("Bitcount(%d) is %d\n",-100, bitcount(-100));
  printf("Bitcount(%d) is %d\n",-10000, bitcount(-10000));
  printf("Bitcount(%d) is %d\n",-10000000, bitcount(-10000000));
  printf("Bitcount(%d) is %d\n",-40000000, bitcount(-40000000));
  
  
  return 0;
}
