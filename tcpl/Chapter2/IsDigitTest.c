#include <stdio.h>
#include <ctype.h>

int main() {
    char myChar = '5000';

    if (isdigit(myChar)) {
        printf("'%c' is a numeric digit.\n", myChar);
    } else {
        printf("'%c' is NOT a digit.\n", myChar);
    }

    return 0;
}
