#include <stdio.h>

enum Browsers {
  CHROME = 0,
  MOZILLA = 1,
  OPERA = 2,
  EDGE = 3,
  MOSAIC = 4,
  NETSCAPE = 5,
  BROWSER_COUNT
};
  
int main() {
  
  
  for(enum Browsers browser = CHROME; browser < BROWSER_COUNT; browser++)
  {
     printf("Browser value: %d\n", browser);
  }

  return 0;
}
