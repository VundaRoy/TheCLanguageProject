#include <stdio.h>

int main() {
  //loop through years
  int year = 0;
  for( year=1900; year < 2000; ++year)
  {
    if(year % 4 == 0 && year  % 100 != 0 ) 
      printf("%d is a leap year \n", year);
      else
      printf("%d is not a leap year \n", year);
  }
}
