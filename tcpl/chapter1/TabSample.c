#include <stdio.h>

int main() {
 int fahr;
 printf("%s\t%s\n", "fahr", "cels");
 for(fahr =-18; fahr <= 120; fahr = fahr +5)
   printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
