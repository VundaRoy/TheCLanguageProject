#include <stdio.h>

int strlen (char s[]);

int main() {
  char *input = "west farm is far" ;
  int length = strlen(input);
  printf("\nLine: %d", length);

}

int strlen(char s[])
{
  int i;
  i = 0;
  while(s[i] != '\0')
     ++i;
  return i;
  
}
