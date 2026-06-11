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
  
  char str1[] = "00111 and 2  by gones are 234";
  char str2[] = " by gones are 234";
  int result;
  
  result = my_atoi(str1);
  printf("Where first char is numeric %s, the result is %d\n", str1, result);
  
  
  result = my_atoi(str2);
  printf("Where the first char is not numeric %s , the result is %d", str2, result);
  return 0;
}
