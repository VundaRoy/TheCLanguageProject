#include <stdio.h>

 int main() {
  int a = 8;   
  int b = 5;  
  int i;
   if(b > 8)
     {
       for(i =0;  i < 4 ; i++)
         if(b < i)
          { 
           printf("%d is less than %d.", b, i);
          
          }
      }
    else
      printf("error == negative");
  
  }
