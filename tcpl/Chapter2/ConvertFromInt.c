#include <stdio.h>

 main() {
  // Example 1: Converting a single character
    char upperChar = 'G';
    char result = lower(upperChar);
    
    printf("Original: %c -> Lowercase: %c\n", upperChar, result);

    // Example 2: Converting an entire string using a loop
    char text[] = "HELLO World!";
    
    printf("Original String: %s\n", text);
    printf("Lowercase String: ");

    for (int i = 0; text[i] != '\0'; i++) {
        // Call the function for each character
        putchar(lower(text[i]));
    }
    printf("\n");

    return 0;
}

int lower(int c)
{
  if(c >= 'A' && c <= 'Z')
     return c + 'a' - 'A';
  else
    return c;
}
