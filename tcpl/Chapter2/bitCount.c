#include <stdio.h>
int bitcount(unsigned x)
{
  int b;
  for(b = 0; x != 0; x >>= 1)
    if(x& 01)
     b++;
   return b;     
}
int main() {
  for(int i=92; i<99; i++)
  {
    printf("Bitcount(%d) is %d\n",i, bitcount(99));
  }
  
  printf("Bitcount(%d) is %d\n",80000000, bitcount(80000000));
  printf("Bitcount(%d) is %d\n",800000, bitcount(800000));
  printf("Bitcount(%d) is %d\n",800, bitcount(800));
  printf("Bitcount(%d) is %d\n",8, bitcount(8));
  printf("Bitcount(%d) is %d\n",1, bitcount(1));
  printf("Bitcount(%d) is %d\n",0, bitcount(0));
  return 0;
}
