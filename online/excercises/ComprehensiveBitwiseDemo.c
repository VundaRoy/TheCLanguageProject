#include <stdio.h>
#include <stdlib.h>

// Function to print a number in binary format
void print_binary(unsigned int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" ");  // Space every 4 bits for readability
    }
}

// Function to display a bitwise operation result
void show_operation(char *operation, unsigned int a, unsigned int b, unsigned int result) {
    printf("\n%s\n", operation);
    printf("─────────────────────────────────────────────\n");
    printf("a = %3u  Binary: ", a);
    print_binary(a, 8);
    printf("\nb = %3u  Binary: ", b);
    print_binary(b, 8);
    printf("\n          Result: ");
    print_binary(result, 8);
    printf("  = %u\n", result);
}

int main() {
    unsigned int a = 60;   // 0011 1100
    unsigned int b = 13;   // 0000 1101
    unsigned int result;

    printf("╔════════════════════════════════════════════════╗\n");
    printf("║     BITWISE OPERATORS DEMONSTRATION IN C       ║\n");
    printf("╔════════════════════════════════════════════════╗\n");

    // AND operator
    result = a & b;
    show_operation("AND (&) - Both bits must be 1", a, b, result);

    // OR operator
    result = a | b;
    show_operation("OR (|) - At least one bit must be 1", a, b, result);

    // XOR operator
    result = a ^ b;
    show_operation("XOR (^) - Bits must be different", a, b, result);

    // NOT operator
    result = ~a;
    printf("\nNOT (~) - Inverts all bits\n");
    printf("─────────────────────────────────────────────\n");
    printf("a = %3u  Binary: ", a);
    print_binary(a, 8);
    printf("\n~a       Result: ");
    print_binary(result & 0xFF, 8);  // Mask to 8 bits for display
    printf("  = %u (as 8-bit)\n", result & 0xFF);

    // Left shift
    result = a << 2;
    printf("\nLEFT SHIFT (<<) - Shift bits left, fill with 0s\n");
    printf("─────────────────────────────────────────────\n");
    printf("a = %3u    Binary: ", a);
    print_binary(a, 8);
    printf("\na << 2     Result: ");
    print_binary(result, 8);
    printf("  = %u\n", result);

    // Right shift
    result = a >> 2;
    printf("\nRIGHT SHIFT (>>) - Shift bits right, fill with 0s\n");
    printf("─────────────────────────────────────────────\n");
    printf("a = %3u    Binary: ", a);
    print_binary(a, 8);
    printf("\na >> 2     Result: ");
    print_binary(result, 8);
    printf("  = %u\n", result);

    // Practical examples
    printf("\n╔════════════════════════════════════════════════╗\n");
    printf("║           PRACTICAL APPLICATIONS               ║\n");
    printf("╔════════════════════════════════════════════════╗\n");

    // Check if number is even or odd
    int num = 17;
    printf("\n1. Check if %d is even or odd:\n", num);
    printf("   %d & 1 = %d  → %s\n", num, num & 1, (num & 1) ? "Odd" : "Even");

    // Multiply/divide by powers of 2
    num = 5;
    printf("\n2. Multiply %d by 8 using left shift:\n", num);
    printf("   %d << 3 = %d\n", num, num << 3);

    num = 64;
    printf("\n3. Divide %d by 4 using right shift:\n", num);
    printf("   %d >> 2 = %d\n", num, num >> 2);

    // Swap two numbers without temp variable
    int x = 25, y = 35;
    printf("\n4. Swap two numbers without temp variable:\n");
    printf("   Before: x = %d, y = %d\n", x, y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("   After:  x = %d, y = %d\n", x, y);

    // Set, clear, toggle, and check specific bits
    unsigned char flags = 0;  // 0000 0000
    printf("\n5. Bit manipulation (flags):\n");
    printf("   Initial flags: ");
    print_binary(flags, 8);
    printf(" = %u\n", flags);

    // Set bit 2
    flags |= (1 << 2);
    printf("   Set bit 2:     ");
    print_binary(flags, 8);
    printf(" = %u\n", flags);

    // Set bit 5
    flags |= (1 << 5);
    printf("   Set bit 5:     ");
    print_binary(flags, 8);
    printf(" = %u\n", flags);

    // Clear bit 2
    flags &= ~(1 << 2);
    printf("   Clear bit 2:   ");
    print_binary(flags, 8);
    printf(" = %u\n", flags);

    // Toggle bit 5
    flags ^= (1 << 5);
    printf("   Toggle bit 5:  ");
    print_binary(flags, 8);
    printf(" = %u\n", flags);

    // Check if bit 3 is set
    int bit_3_set = (flags >> 3) & 1;
    printf("   Bit 3 is: %s\n", bit_3_set ? "SET" : "CLEAR");

    printf("\n");
    return 0;
}
