#include <stdio.h>
#include <stdbool.h>

int main() {
  int age = 27;
  bool isCitizen = true; 
  bool rightElectorate = true;

  if (age >= 18) {
    printf("Old enough to vote.\n");

    if (isCitizen) {
      if(rightElectorate)
       printf("Your are a citizen who can vote here.\n");
       else
       printf("And you are a citizen, but you need to vote elsewhere!\n");
    } else {
      printf("But you must be a citizen to vote.\n");
    }
  } else {
    printf("Not old enough to vote.\n");
  }

  return 0;
}
