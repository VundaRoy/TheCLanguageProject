#include <stdio.h>

int main() {
 
  char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','\0'};
  for(int i =0; i< sizeof(alphabets); i++)
  {
    printf("The letter %c is number %d \n",alphabets[i], ConvertToInt(alphabets[i]));
  }
  
}

int ConvertToInt(int c)
{
  return c;
}
