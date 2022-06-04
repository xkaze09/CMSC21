/*Prints a one month reminder list*/

#include <stdio.h>    /* input, output */
#include <string.h>   /* string functions */
#include <stdlib.h>   /* string conversions */

#define MAX_REMIND 50 // Size of reminders (ROW)
#define MSG_LEN 60    // Length of reminders (COLUMN)

int read_line(char str[], int n); // read_line function definition

int main(void)
{
    /* String arrays and variable declaration */
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];
    char day, i, j, num_remind = 0;

    for (;;) {
        /* If the value of num_remind does not exceed MAX_REMIND, then this loop will continue on 
            its normal course until it reaches 31 days or when the user enters their last reminder (whichever comes first). */
        if (num_remind == MAX_REMIND) {
            printf("--No space left --\n");
            break;
        }

        /* Prompt user for an input by day and reminder by each iteration */
        printf("Enter day and reminder: ");
        scanf("%2d", &day);     // Store the first two characters as integers to char day 
        if (day == 0) {         // '0' input ends the loop
            break;
        }

        sprintf(day_str, "%2d", day); // convert the int day back into string form and store to day_str
        read_line(msg_str, MSG_LEN);  // call read_line to read the input reminder to msg_str string array

        for (i = 0; i < num_remind; i++) {              // iterate through each day-reminder combination
            if (strcmp(day_str, reminders[i]) < 0) {    // search through the array and determine where the day belongs by strcmp comparison
                break;
            }
        }
        /* Checks if the string is under the specified in the previous loop,
            then move that string down the array, copies that string using strcpy */
        for (j = num_remind; j > i; j--) {
            strcpy(reminders[j], reminders[j - 1]);
        }

        strcpy(reminders[i], day_str);  // Copy the day into the array
        strcat(reminders[i], msg_str);  // Append the reminder to that corresponding element (or day)

        num_remind++;                   // Move to the next reminder
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++) {  // Iterate through the reminder array
        printf("%s\n", reminders[i]);   // Print day-reminders
    }

    system("PAUSE");
    return 0;
}

/* Function read_line takes one argument, str[] (which represents an array), 
    and returns an integer value representing how many characters were input into it. */
int read_line(char str[], int n) {
    // Variable declaration
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {  // Read user input until a newline '\n'
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}