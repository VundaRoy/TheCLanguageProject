#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 89};
  for(int i =0 ; i < sizeof(myNumbers); i++)
  printf("%d", myNumbers[i]);
 
  return 0;
}
