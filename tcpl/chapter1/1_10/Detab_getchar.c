#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Replaces tabs in the input with the proper number of blanks to space 
 * to the next tab stop.
 * * Assumes a fixed set of tab stops, defined by TAB_STOP.
 * Input is read from stdin and output is written to stdout.
 */

// Define the number of columns between fixed tab stops (e.g., 8 columns)
#define TAB_STOP 8

int main() {
    int c;             // Variable to hold the current character read from input
    int column = 1;    // Current column position, starting at 1
    int idx;           // Index for iterating the default input string

    printf("--- Detab Program ---\n");
    printf("Tab stops are set every %d columns.\n", TAB_STOP);
    
    // --- Default Input Demonstration Block ---
    const char *default_input = "Name:\tMax Blumenthal\nPosition:\tSite reliability Engineer\n";
    
    printf("\n--- Processing Default Input (Demonstration) ---\n");
    printf("Original String (with tabs):\n\"%s\"\n", default_input);
    printf("Detabbed Output:\n");

    // Process the default string using the detab logic
    for (idx = 0; default_input[idx] != '\0'; idx++) {
        c = default_input[idx];

        if (c == '\t') {
            // 1. Calculate the number of spaces needed.
            int spaces_needed = TAB_STOP - ((column - 1) % TAB_STOP);

            // 2. Print the required number of spaces
            for (int i = 0; i < spaces_needed; ++i) {
                putchar(' ');
            }
            
            // 3. Update the column position
            column += spaces_needed;
            
        } else if (c == '\n') {
            // If it's a newline, print it and reset the column counter
            putchar(c);
            column = 1;
            
        } else {
            // For any other character, print it and increment the column counter
            putchar(c);
            column++;
        }
    }
    
    // --- End Default Input Demonstration Block ---
    
    printf("\n--- Ready for Live Input ---\n");
    printf("Type your text and press Ctrl+D (or Ctrl+Z on Windows) to end input.\n\n");

    // Reset column for the interactive input that follows
    column = 1;

    // Loop until the end-of-file (EOF) character is encountered (Interactive Input)
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // 1. Calculate the number of spaces needed.
            // (column - 1) % TAB_STOP gives the offset from the start of the current tab stop.
            int spaces_needed = TAB_STOP - ((column - 1) % TAB_STOP);

            // 2. Print the required number of spaces
            for (int i = 0; i < spaces_needed; ++i) {
                putchar(' ');
            }

            // 3. Update the column position
            column += spaces_needed;
            
        } else if (c == '\n') {
            // If it's a newline, print it and reset the column counter
            putchar(c);
            column = 1;
            
        } else {
            // For any other character, print it and increment the column counter
            putchar(c);
            column++;
        }
    }

    printf("\n\n--- Input Ended ---\n");

    return 0;
}
