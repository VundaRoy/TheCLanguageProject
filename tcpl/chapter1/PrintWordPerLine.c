#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0
int main() {
    int c, numberOfLines, numberOfWords, numberOfCharacters, state;
    state = OUT;
    numberOfLines = numberOfWords = numberOfCharacters = 0;

    const char *test_input = "uyar vara uyar nalam \n";
    int input_length = strlen(test_input);
    int i = 0;

    while (i < input_length) {
        c = test_input[i];
        i++;
        ++numberOfCharacters;

        if (c == '\n')
            ++numberOfLines;

        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');  // End of a word
                state = OUT;
            }
        } else {
            if (state == OUT) {
                state = IN;
                ++numberOfWords;
            }
            putchar(c);  // Print character of the word
        }
    }

    printf("\nLines: %d, Words: %d, Characters: %d\n", numberOfLines, numberOfWords, numberOfCharacters);
    return 0;
}
