#include <stdio.h>

void display_binary(unsigned int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" ");  // Space every 4 bits for readability
    }
}


int main() {

  int x = 4;
  int i = 2;
  printf("Or: %d | %d is %d\n",x, i, x | i  );
  
  printf("Or: %d & %d is %d\n",x, i, x & i  );
  
  printf("The binary representation are as follows:\n");
  printf("Where %d is ", x); display_binary(x,4); printf("\n");
  printf("Where %d is ", i); display_binary(i,4); printf("\n");
  
  printf("And the results being...\n");
  printf("Where the or result is %d ", x|i); display_binary(x|i,4); printf("\n");
  printf("And the and result is %d ", x&i); display_binary(x&i,4); printf("\n");
  return 0;
}
