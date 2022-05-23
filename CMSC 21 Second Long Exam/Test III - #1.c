/*
    CMSC 21 Second Long Exam
    Part III. Applications #1.
    By: Christian Justin J. Salinas
*/

#include <stdio.h>   /* printf, scanf */
#include <ctype.h>   /* toupper, isalpha */
#include <stdbool.h> /* bool return type */

/* START OF FUNCTION DECLARATION */
void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);
/* END OF FUNCTION DECLARATION */

int main(void) {
    /* Keep count of how many times each word appears in the input string.*/
    int first_word[26] = {0}, second_word[26] = {0};

    /* START OF USER PROMPT: 
            Ask user for two words and return the integers containing 
                how many occurrences there were of the words at the positions in each of the strings. */
    printf("Enter first word: ");
    scan_word(first_word);
    printf("Enter second word: ");
    scan_word(second_word);
    /* END OF USER PROMPT */

    /* Check if the two words by input are anagrams or not */
    if (is_anagram(first_word, second_word)) {
        printf("The words are anagrams.\n");
    }
    else {
        printf("The words are not anagrams.\n");
    }
    return 0;
}

/*         START OF FUNCTION DEFINITION         */

/* Count the number of occurrences of each
    character in the word and store them in occurences array */
void scan_word(int occurrences[26]) {
    char c;
    while ((c = getchar()) != '\n') {
        /* Inside this loop, if there are any alphabetic characters present in getchar(), 
            they are stored into occurrences1[toupper(c) - 'A']++ where toupper() converts lowercase letters to uppercase ones. */
        if (isalpha(c)) { 
            occurrences[toupper(c) - 'A']++;
        }
    }
}

/* Take two arrays of 26 characters each and 
    compare them to see if they have the same number of occurrences. */
bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    int i;
    for (i = 0; i < 26; i++) {
        /* Check each character in the first word 
            to see if it is different from second word's characters. */
        if (occurrences1[i] != occurrences2[i]) {
            return false;
        }
    }
    return true;
}
/*         END OF FUNCTION DEFINITION          */