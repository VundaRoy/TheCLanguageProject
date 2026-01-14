#include <stdio.h>

int main() {
  char text[] = "The mad hatter is a hater";
  squeeze(text, 't');
  printf("Removing ts gives %s\n", text);
}

void squeeze(char s[], int c)
{
   int i, j;
   for (i = j = 0; s[i] != '\0'; i++)
     if(s[i] != c)
       s[j++] = s[i];
   s[j] = '\0';

}
