#include <ctype.h>

int my_atoi(char s[])
{
  int i, n, sign;
  for(i=0; isspace(s[i]); i++);
  sign = (s[i] == '-') ? -1 : 1;
  if(s[i] == '+' || s[i] == '-')
      i++;
   for(n=0; isdigit(s[i]); i++)
      n= 10 * n + (s[i] - '0');
   return sign * n;
}

int main() {
  
  char mystring[] = "  by gones are 234";
  int result;
  
  result = my_atoi(mystring);
  printf("From %s to %d", mystring, result);
  return 0;
}
