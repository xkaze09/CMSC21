/* Prints int and float values in various formats */

// For printf function
#include <stdio.h>

// Starting point for C program execution. Can be called without any argument.
int main(void)
{
    // Variable Declaration and Initialization
    // using int and float data types
    int i;
    float x;

    i = 40;
    x = 839.21f;
    // End of Variable Declaration and Initialization

    // Display output by format string
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    // Indicate success of execution
    return 0;
}
