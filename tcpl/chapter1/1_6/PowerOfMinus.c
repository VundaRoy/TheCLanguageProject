#include <stdio.h>
int power(int m, int n);
 main()
{
int i;
for(i=-5; i<10; ++i)
printf("2 to the power of %d is %d and -3 to the power of %d is %d\n", i, power(2,i),i, power(-3,i));
return 0;
}
int power(int base, int n)
{
  int i, p;
  p = 1;
  for(i=1; i <=n; ++i)
    p= p * base;
  return p;
}
/* results are

2 to the power of -5 is 1 and -3 to the power of -5 is 1
2 to the power of -4 is 1 and -3 to the power of -4 is 1
2 to the power of -3 is 1 and -3 to the power of -3 is 1
2 to the power of -2 is 1 and -3 to the power of -2 is 1
2 to the power of -1 is 1 and -3 to the power of -1 is 1
2 to the power of 0 is 1 and -3 to the power of 0 is 1
2 to the power of 1 is 2 and -3 to the power of 1 is -3
2 to the power of 2 is 4 and -3 to the power of 2 is 9
2 to the power of 3 is 8 and -3 to the power of 3 is -27
2 to the power of 4 is 16 and -3 to the power of 4 is 81
2 to the power of 5 is 32 and -3 to the power of 5 is -243
2 to the power of 6 is 64 and -3 to the power of 6 is 729
2 to the power of 7 is 128 and -3 to the power of 7 is -2187
2 to the power of 8 is 256 and -3 to the power of 8 is 6561
2 to the power of 9 is 512 and -3 to the power of 9 is -19683

*/
