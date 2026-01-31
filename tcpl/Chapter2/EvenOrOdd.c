#include <stdio.h>

unsigned evenOrOdd(int x) {
     return (x & 1);
}
int main() {
   
    
    printf("Result: 21 is 0x%x\n", evenOrOdd(21));
    printf("Result: 8 is 0x%x\n", evenOrOdd(8));
    return 0;
}
