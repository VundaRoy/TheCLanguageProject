#include <stdio.h>

int main() {
  // Create a string
  char firstName[30];
  char secondName[30];

  // Ask the user to input some text (name)
  printf("Enter your first name and press enter: \n");

  // Get and save the text
  scanf("%s", firstName);

// Ask the user to input some text (name)
  printf("Enter your second name and press enter: \n");

  // Get and save the text
  scanf("%s", secondName);


  // Output the text
  printf("Hello %s %s", firstName, secondName);
  
  return 0;
}
