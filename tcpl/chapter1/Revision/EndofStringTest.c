#include <stdio.h>

int main() {
    char *test_string = "Hello World!"; // Your temporary string
    int i = 0;
    int c;

    // We simulate getchar() by pulling from the string instead
    while ((c = test_string[i++]) != '\0') {
        putchar(c);
    }

    printf("\nEnd of test string reached.\n");
    return 0;
}
