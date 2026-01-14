#include <stdio.h>

int main() {
  char text[] = "The mad hatter is a hater";
  char text1[] = "For";
  
  strcat(text, text1);
  printf("Change from %s to %s\n", text, text1);
}

void strcat(char s[], char t[])
{
   int i, j;
   
   i=j=0;
   while (s[i] != '\0') /*find end of s*/
      i++;
   while ((s[i++] = t[j++]) != '\0')
     ;
   
}
