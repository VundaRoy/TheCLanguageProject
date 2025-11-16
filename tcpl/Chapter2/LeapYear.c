#include <stdio.h>

int main() {
  //loop through years
  int year = 0;
  for( year=1999; year < 2029; ++year)
  {
    if((year % 4 == 0 && year  % 100 != 0 ) || year % 400 == 0)
      printf("%d is a leap year \n", year);
      else
      printf("%d is not a leap year \n", year);
  }
}
