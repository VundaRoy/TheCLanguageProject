#include <stdio.h>
#define IN 1
#define OUT 0
int main() {
  int c, numberOfLines, numberOfWords, numberOfCharacters, state;
  state = OUT;
  numberOfLines = numberOfWords = numberOfCharacters = 0;
  // --- TEMPORARY TEST CODE ---
    const char *test_input = "hello world and other worlds too!\n which is just as well placed\nAnd to even think I was right\n"; // Input string
    int input_length = strlen(test_input);
    int i = 0;

    // Change the while loop to iterate over the string
    while (i < input_length) {
        c = test_input[i]; // Get character from string
        i++; // Move to next character
    ++numberOfCharacters;
    if(c == '\n')
      ++numberOfLines;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if(state == OUT){
      state= IN;
      ++numberOfWords;
    }
  }
  printf("%s\n", test_input);
  printf("Lines	Words 	Chars\n");
  printf("%d\t %d\t %d\n", numberOfLines, numberOfWords, numberOfCharacters);
}
