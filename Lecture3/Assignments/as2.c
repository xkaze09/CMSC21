/*
    Lecture 3 Assignment #2
    C program that converts two-digit number input to words output
    By: Christian Justin J. Salinas
*/

#include <stdio.h> /* Include stdio.h for getting inputs
    and printing outputs properly. */

int main() {
    /* Variable Declaration */
    int first_digit, second_digit;

    /* Ask for a two-digit number input and store it accordingly */
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &first_digit, &second_digit);

    /* Display output */
    printf("%d%d in words is:", first_digit, second_digit);

    /* Evaluate the 2-digit number */
    switch(first_digit)
    {
    case 0: /* If the first digit is 0 */
        switch(second_digit) /* And if the second digit is 0-9 */
        {
            case 0: printf(" Zero"); break;
            case 1: printf(" One"); break;
            case 2: printf(" Two"); break;
            case 3: printf(" Three"); break;
            case 4: printf(" Four"); break;
            case 5: printf(" Five"); break;
            case 6: printf(" Six"); break;
            case 7: printf(" Seven"); break;
            case 8: printf(" Eight"); break;
            case 9: printf(" Nine"); break;
        }
        break;
    case 1: /* If the first digit is 1 */
        switch(second_digit) /* And if the second digit is 0-9 */
        {
            case 0: printf(" Ten"); break;
            case 1: printf(" Eleven"); break;
            case 2: printf(" Twelve"); break;
            case 3: printf(" Thirteen"); break;
            case 4: printf(" Fourteen"); break;
            case 5: printf(" Fifteen"); break;
            case 6: printf(" Sixteen"); break;
            case 7: printf(" Seventeen"); break;
            case 8: printf(" Eighteen"); break;
            case 9: printf(" Nineteen"); break;
        }
        break;

    /* If the first digit is not 0 and 1 */
    case 2: printf(" Twenty"); break;
    case 3: printf(" Thirty"); break;
    case 4: printf(" Forty"); break;
    case 5: printf(" Fifty"); break;
    case 6: printf(" Sixty"); break;
    case 7: printf(" Seventy"); break;
    case 8: printf(" Eighty"); break;
    case 9: printf(" Ninety"); break;
    }

    /* If the first digit is from 2 to 9 */
    if (first_digit > 1) {
        switch(second_digit) { /* And if the second digit is from 1 to 9 */
            case 1: printf("-one"); break;
            case 2: printf("-two"); break;
            case 3: printf("-three"); break;
            case 4: printf("-four"); break;
            case 5: printf("-five"); break;
            case 6: printf("-six"); break;
            case 7: printf("-seven"); break;
            case 8: printf("-eight"); break;
            case 9: printf("-nine"); break;
        }
    }

    /* Indicate that the program ends here */
    return 0;
}
