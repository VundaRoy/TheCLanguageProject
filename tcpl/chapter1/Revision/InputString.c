#include <stdio.h>
#define IN 1
#define OUT 0
int main() {
  int c, n1, nw, nc, state;
  state = OUT;
  n1 = nw = nc = 0;
  // --- TEMPORARY TEST CODE ---
    const char *test_input = "Franciswroteand"; // Input string
    int input_length = strlen(test_input);
    int i = 0;

    // Change the while loop to iterate over the string
    while (i < input_length) {
        c = test_input[i]; // Get character from string
        i++; // Move to next character
    ++nc;
    if(c == '\n')
      ++n1;
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if(state == OUT){
      state= IN;
      ++nw;
    }
  }
  printf("Number of lines is %d\nNumber of blanks is %d\nnumber of characters is %d\n", n1, nw, nc);
}
