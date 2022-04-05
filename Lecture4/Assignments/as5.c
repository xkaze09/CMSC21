/*
    Lecture 4 Assignment #5
    C program that displays a one-month calendar
    By: Christian Justin J. Salinas
*/

#include <stdio.h> // For getting inputs and outputs properly

int main() {
    /* Declare variables by int type */
    int i, j, days_in_month, day_of_week;

    /* Ask the user for number of days and store it */
    printf ("Enter number of days in month: ");
    scanf ("%d", &days_in_month);

    /* Check if days in month is valid, notify the user if not */
    if ((days_in_month < 28) || (days_in_month > 31)) {
        printf("Invalid input: Please enter valid number of days in a month from 28 to 31.\n");
    } else {
        /* Ask the user for day of week and store it */
        printf ("Enter the starting day of the week (1=Sun, 7=Sat): ");
        scanf ("%d", &day_of_week);

        /* Check if day of week is valid, notify the user if not */
        if ((day_of_week < 1) || (day_of_week > 7)) {
            printf("Invalid input: Please enter valid day of a week from 1 to 7.\n");
        } else {
            // Let day of week be 0-6 rather than 1-7
            day_of_week -= 1;

            // Print days of the week
            printf("\n  S  M  T  W Th  F  S\n");

            // Print the first line of the calendar (readability)
            for(i = 0; i < day_of_week; i++)
                printf("   ");

            // For each day in the month...
            for(i = 1; i <= days_in_month; i++) {
                /* Print the current day of the week.
                    At least 3 spaces ("%3d") are inserted with the value */
                printf("%3d", i);

                /* Increment the day_of_week.
                    And wrap day_of_week around to 0 with the modulo operator '% 7' when it reaches 7. */
                day_of_week = (day_of_week + 1) % 7;

                /* If the new day_of_week is 0, output a newline to start at the
                        beginning of the next line */
                if(day_of_week == 0)
                    printf("\n");
            }
        }
    }
    /* Indicate that the program ends here */
    return 0;
}
