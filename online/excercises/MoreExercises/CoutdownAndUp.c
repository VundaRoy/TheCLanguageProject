#include <stdio.h>

void countdown(int n);

int main() {
  printf("Final count down\n");
  countdown(10);
  printf("\nCount up\n");
  countup(2);
  return 0;
}

void countdown(int n) {
  if (n > 0) {
    printf("%d ", n);
    countdown(n - 1);
  }
  }
  void countup(int n) {
  if (n < 15) {
    printf("%d ", n);
    countup(n + 1);
  }
}
