#include <stdio.h>

int main() {
 
  char BigA = 'A';
  char SmallA = 'a';
  
  int a1 = BigA; int a2 = SmallA;
  printf("big A is %d and small a is %d\n", a1, a2);
  printf("big A is %c and small a is %c", BigA, SmallA);
  return 0;
}
