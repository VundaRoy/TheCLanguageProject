#include <stdio.h>

int main() {
  char myWord[] = "Goodness gracious me!";
  char lastLetter = 'Z';
  float behemoth = 189023 * 45.9;
  int limit = 190 + 12;
  
  printf("%s\n", myWord);
  printf("The second letter is %c\n", myWord[1]);
  printf("The true size is %f\n", behemoth);
  printf("The last letter is genrally %c\n", lastLetter);
  printf("Sum of 190 and 12 is %d\n", limit);

  return 0;
}
