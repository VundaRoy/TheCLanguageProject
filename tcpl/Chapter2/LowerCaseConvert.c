#include <stdio.h>

 main() {
  // Example 1: Converting a single character
    char upperChar = 'G';
    char result = upper(upperChar);
    
    printf("Original: %c -> Lowercase: %c\n", upperChar, result);

    // Example 2: Converting an entire string using a loop
    char text[] = "COMO ES TU ca va bieN!";
    
    printf("Original String: %s\n", text);
    printf("Converted to Lowercase String: ");

    for (int i = 0; text[i] != '\0'; i++) {
        // Call the function for each character
        putchar(lower(text[i]));
    }
    printf("\n");

    return 0;
}

int upper(int c)
{
  if(c >= 'a' && c <= 'z')
     return c + 'A' - 'a';
  else
    return c;
}

int lower(int c)
{
  if(c >= 'A' && c <= 'Z')
     return c + 'a' - 'A';
  else
    return c;
}
