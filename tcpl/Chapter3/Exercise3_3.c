#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void expand(const char s1[], char s2[])
{
  int i = 0; // Index for reading s1
  int j = 0; // Index for writing s2
  char c;

  while ((c = s1[i]) != '\0')
  {
    /* 
       Check for a valid dash pattern:
       1. i > 0: There is a valid start character behind the dash.
       2. s1[i+1] != '\0': There is a valid end character ahead of the dash.
       3. s1[i+1] > c: The range is increasing (e.g., 'a' to 'z', not 'z' to 'a').
    */
    if (c == '-' && i > 0 && s1[i + 1] != '\0' && s1[i + 1] > s1[i - 1])
    {
      // The start character is the one we already wrote in the previous iteration
      char start = s1[i - 1] + 1; 
      char end = s1[i + 1];

      // Fill in the missing range gap
      while (start <= end)
      {
        s2[j++] = start++;
      }

      // Skip past the end character we just processed
      i += 2; 
    }
    else
    {
      // Take literal characters, leading dashes, or trailing dashes
      s2[j++] = s1[i++];
    }
  }
  
  s2[j] = '\0'; // Always null-terminate your output string!
}

int main()
{
  // Test cases covering the explicit K&R edge cases
  const char *test1 = "-a-z";     // Leading dash literal
  const char *test2 = "a-z0-9";   // Multiple ranges
  const char *test3 = "a-b-c";    // Consecutive dashes
  const char *test4 = "a-z-";     // Trailing dash literal
  
  // Allocate large enough buffers for s2 output
  char buffer[100];

  expand(test1, buffer);
  printf("%s -> %s\n", test1, buffer);

  expand(test2, buffer);
  printf("%s -> %s\n", test2, buffer);

  expand(test3, buffer);
  printf("%s -> %s\n", test3, buffer);

  expand(test4, buffer);
  printf("%s -> %s\n", test4, buffer);

  return 0;
}
