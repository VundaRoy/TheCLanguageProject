#include <stdio.h>

// Create a structure called SchoolRanking
struct SchoolRanking {
  int rating;
  char *school;
};

int main() {
  // Create a structure variable of SchoolRanking called s1
  struct SchoolRanking s1;

  // Assign values to members of s1
  s1.rating = 2;
  s1.school = "Beecroft";

  // Print values
  printf("My number: %d\n", s1.rating);
  printf("My letter: %s\n", s1.school);

  return 0;
}
