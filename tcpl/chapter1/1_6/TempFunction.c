#include <stdio.h>
/* print farhrenheit celsius table
for farm = 0 , 20, ..., 300 */
int Convert(int lower, int upper, int step);
int main()
{
  Convert(0, 300, 20);
}

int Convert(int lower, int upper, int step)
{
int fahr, celsius;
  
  fahr = lower;
  printf("Fahren Celsius\n");
  while( fahr <= upper){
     celsius = 5 * (fahr-32) / 9;
     printf("%d\t%d\n", fahr, celsius);
     fahr = fahr + step;
     }
}
