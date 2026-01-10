#include <stdio.h>

 main() {
  char *test_string = "Hello World and others as well!"; // 31 chars
 long nc;
 nc = 0;
 int c;
 int i = 0;
 
 while((c = test_string[i++]) != '\0')
 ++nc;
 printf("%1d\n", nc);
 
}
