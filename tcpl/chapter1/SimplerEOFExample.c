#include <stdio.h>

int main() {
    int c; // 'c' must be an 'int', NOT a 'char'

    // Loop continues until the input function returns EOF
    while ((c = getchar()) != EOF) {
        // Process the character 'c'
        putchar(c);
    }
    printf("\nEnd of input reached or an error occurred.\n");
    return 0;
}
