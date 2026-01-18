#include <stdio.h>

int main() {
  int time = 29;
  if (time < 5) 
    {
       printf("Too early. Sleep!");
    }
    else if(time < 10)
    {
      printf("Good morning");
    } 
    else if (time < 20) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}
