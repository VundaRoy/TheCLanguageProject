#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("Go on at %d\n", i);
  }
   printf("Break at %d\n", i);
  return 0;
}
