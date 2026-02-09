#include <stdio.h>
#include <stddef.h> // Required for size_t

int main() {
    size_t size = sizeof(int);
    printf("The size of an integer is %zu bytes.\n", size);

    size_t array_length = 102;
    printf("The array length is %zu.\n", array_length);
    
    size = sizeof(float);
    printf("The size of a float is %zu bytes.\n", size);
    size = sizeof(double);
    printf("The size of a double is %zu bytes.\n", size);
    size = sizeof(short);
    printf("The size of a short is %zu bytes.\n", size);
     size = sizeof(long);
    printf("The size of a long is %zu bytes.\n", size);
     size = sizeof(unsigned);
    printf("The size of a unsigned is %zu bytes.\n", size);

    return 0;
}
