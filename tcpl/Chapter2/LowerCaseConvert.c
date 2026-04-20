#include <stdio.h>

 main() {
  // Example 1: Converting a single character
    char upperChar = 'r';
    char result = upper(upperChar);
    
    printf("Original char: %c \nConverted to Lowercase: %c\n", upperChar, result);
    //Converted to upper string 
    char text1[] = "dieses ist sein du nicht wahr?";
     printf("Original String: %s\n", text1);
    printf("Converted to Uppercase String: ");
    for (int i = 0; text1[i] != '\0'; i++) {
        // Call the function for each character
        putchar(upper(text1[i]));
    }
    printf("\n");

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
