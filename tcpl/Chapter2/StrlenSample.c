#include <stdio.h>

int strlen (char s[]);

int main() {
  char *input = "west farm is far from gone" ;
  int length = strlen(input);
  printf("\nThe string of '%s' is %d characters long", input, length);

}

int strlen(char s[])
{
  int i;
  i = 0;
  while(s[i] != '\0')
     ++i;
  return i;
  
}
