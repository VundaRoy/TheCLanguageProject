#include <stdio.h>
/* print farhrenheit clesius table
for farm = 0 , 20, ..., 300 */

main()
{
  int fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 110;
  step = 2;
  fahr = lower;
  printf("Fahr	Cel\n");
  while( fahr <= upper){
     celsius = 5 * (fahr-32) / 9;
     printf("%d\t%d\n", fahr, celsius);
     fahr += step;
  
  }
  

}
