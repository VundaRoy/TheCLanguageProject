#include <stdio.h>
#include <stdlib.h>

int main() {
  char c = '2';
  if (isalpha(c)) {
    printf("%c is a letter", c);
  } else {
    printf("%c is not a letter", c);
  }
  return 0;
}
