/*
    Lectures 6-7 Assignment #2 (WITH FUNCTIONS)
    By: Christian Justin J. Salinas
*/

#include <stdio.h>
#include <stdbool.h>

/* MACROS for 8 rows and 8 columns for road_networks */
#define ROW 8
#define COLUMN 8

/* Forward function declarations for readability */
void display_matrix();
char find_user_location(int user_input);
char find_charging_station(char point);

int main() {

    /* Variable declaration by int and char */
    int user_input;
    char location_point;

    display_matrix();   // Displays the adjacency matrix

    /* Ask the user for their location and store it. \
        Each number is equivalent to their own corresponding points A - H. */
    printf("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H");
    printf("\nYour location: ");
    scanf("%d", &user_input);

    location_point = find_user_location(user_input);  // The location of the user, which is a number, will be converted to letter
    printf("At point: %c\n", location_point);

    find_charging_station(location_point);  // Identify the nearest charging station by the use of char values of "point"

    return 0;
}

/* DISPLAY_MATRIX function displays the adjacency matrix by initialization of 8x8 multidimentional array by [ROW] and [COLUMN].
    Print function is to display the heading of points A to H. Loops are then used to display the values in each row and column.
    Initial loop is for columns for each row and the latter nested if-else statement is for [ROW][COLUMN] that identifies whether it is true or false. */
void display_matrix() {

    bool road_networks[ROW][COLUMN] = {
        {1,1,0,0,0,1,0,0},
        {1,1,1,0,0,0,0,0},
        {0,1,1,0,1,1,0,0},
        {0,0,0,1,1,0,0,0},
        {0,0,0,1,1,0,0,0},
        {1,0,1,0,0,1,0,0},
        {1,0,0,1,0,0,1,0},
        {0,0,0,0,0,1,0,1},
    };

    printf("\tA\tB\t[C]\t[D]\tE\tF\tG\tH\n");

    for (int row = 0; row < ROW; row++) {
        switch(row) {
            case 0: printf("A"); break;
            case 1: printf("B"); break;
            case 2: printf("[C]"); break;
            case 3: printf("[D]"); break;
            case 4: printf("E"); break;
            case 5: printf("F"); break;
            case 6: printf("G"); break;
            case 7: printf("H"); break;
        }
        printf("\t");

        for (int column = 0; column < COLUMN; column++) {
            if (road_networks[row][column]) {
                printf("1");
            } else {
                printf("0");
            }
            printf("\t");
        }
        printf("\n");
    }
}

/* FIND_USER_LOCATION function utilizes user input that will be
    converted to its equivalent in letters. */
char find_user_location(int user_input) {

    char letter;

    switch(user_input){
        case 0: letter = 'A'; break;
        case 1: letter = 'B'; break;
        case 2: letter = 'C'; break;
        case 3: letter = 'D'; break;
        case 4: letter = 'E'; break;
        case 5: letter = 'F'; break;
        case 6: letter = 'G'; break;
        case 7: letter = 'H'; break;
    }
    printf("\n");

    return letter;
}

/* FIND_CHARGING_STATION function for identifying the nearest charging station
        by the use of char values of "point", which is converted value of the user input. */

char find_charging_station(char location_point) {

    printf("point: ");

    switch(location_point) {
        case 'C': case 'D':
            printf("%c is a charging station.", location_point); break;
        case 'A': case 'B': case 'F':
            printf("C arrived to charging station."); break;
        case 'E': case 'G':
            printf("D arrived to charging station."); break;
        case 'H':
            printf("No pathway towards the nearest charging station."); break;
    }
    printf("\n");

    return 0;
}
