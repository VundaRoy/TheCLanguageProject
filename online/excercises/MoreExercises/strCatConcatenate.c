#include <stdio.h>
#include <string.h>

int main() {
  char myStr[20] = "Moose";
  strcat(myStr, " Caribou!");
  printf("%s", myStr);
  return 0;
}
