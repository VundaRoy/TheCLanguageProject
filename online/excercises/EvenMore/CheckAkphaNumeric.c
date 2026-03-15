#include <stdio.h>
#include <ctype.h>

int main() {
  char c = '#';
  if (isalnum(c)) {
    printf("%c is alphanumeric", c);
  } else {
    printf("%c is not alphanumeric", c);
  }
  
  return 0;
}
