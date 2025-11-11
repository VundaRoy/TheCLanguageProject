#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

int main() {
    int c, n1, nw, nc, state, nonWords;
    state = OUT;
    n1 = nw = nc = 0;

    const char *test_input = "uyar vara uyar nalam \n udai yavan\t\t yavan avan \n agara mudala ezhuthellaam\n";
    int input_length = strlen(test_input);
    int i = 0;

    while (i < input_length) {
        c = test_input[i];
        i++;
        ++nc;

        if (c == '\n')
            ++n1;

        if (c == ' ' || c == '\n' || c == '\t') {
        ++nonWords;
            if (state == IN) {
                putchar('\n');  // End of a word
                state = OUT;
            }
        } else {
            if (state == OUT) {
                state = IN;
                ++nw;
            }
            putchar(c);  // Print character of the word
        }
    }

    printf("\nLines: %d, Words: %d, Characters: %d, Total non Words: %d\n", n1, nw, nc, nonWords);
    return 0;
}
