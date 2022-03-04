/* C program that adds two fractions */

// For printf function
#include <stdio.h>

// Starting point for C program execution. Can be called without any argument.
int main(void)
{
    // Variable Declaration using int data type
    int num1, denom1, num2, denom2, result_num, result_denom;

    // Start of asking user input for initialization
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);     // Reads the entire input as separate integers

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);     // Reads the entire input as separate integers
    // End of asking user input for initialization

    // Calculation for numerator and denominator by formula
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // Display output by format string
    printf("The sum is %d/%d\n", result_num, result_denom);

    // Indicate success of execution
    return 0;
}
