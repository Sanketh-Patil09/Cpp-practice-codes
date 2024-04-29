#include <stdio.h>

int main() {
    int r1 = 0;
    int r2 = 123;
    int r3;
    int r5;

    // Loop
    while (1) {
        // Bitwise AND operation with mask 0xF
        r3 = r2 & 0xF;
        
        // Add the result to r1
        r1 += r3;
        
        // Right shift r2 by 4 bits
        r2 = r2 >> 4;
        
        // Check if r2 is 0
        if (r2 == 0)
            break;
    }

    // Check if r1 is greater than 0x100
    if (r1 > 0x100)
    {
        r5 = 0xAA;
        printf("Sum is greater than 100");
    }
    else
        r5 = 0xFF;
        printf("Sum is not greater than 100");
    // End of the program
    return 0;
}
