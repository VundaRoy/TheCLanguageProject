#include <stdio.h>

int main() {

  unsigned x = 34;
  
  for(int i=0; i< 3; i++)
  {
   printf("Bitwise: %d >> %d is %d\n",x, i, x >> i  );
  }
  for(int i=0; i< 3; i++)
  {
   printf("Bitwise: %d << %d is %d\n",x, i, x << i  );
  }
  return 0;
}
