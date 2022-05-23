/*
    CMSC 21 Second Long Exam
    Part III. Applications #2.
    By: Christian Justin J. Salinas
*/

#include <stdio.h>   /* printf, scanf */
#include <ctype.h>   /* toupper, isalpha */
#include <stdbool.h> /* bool return type */

/* START OF FUNCTION DECLARATION */
void scan_word(char *word);
bool is_anagram(const char *word1, const char *word2);
/* END OF FUNCTION DECLARATION */

int main(void) {
    /* Keep count of how many times each word appears in the input string.*/
    char first_word[26] = {0}, second_word[26] = {0};

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

/*  Store a count of how many times each letter 
        appears in word1 and word2 respectively.  */
void scan_word(char *word) {
    char c;

    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            *word++ = toupper(c); // Convert word to uppercase
        }
    }
}

/* Take two arrays of 26 characters each and
    compare them to see if they have the same number of occurrences. */
bool is_anagram(const char *word1, const char *word2) {

    int letters[26] = {0};  // Points to the array of 26 integers.
    int *same = letters;    // Points to the string "A".

    // Count the number of occurrences of each character in the word and store them in the array.
    while (*word1) {
        letters[*word1++ - 'A']++; // INCREMENT same
    }

    // Count the number of occurrences of each character in the word and store them in the array.
    while (*word2) {
        letters[*word2++ - 'A']--; // DECREMENT same
    }

    for (int i = 0; i < 26; i++) {
        // All 26 elements of letters will be equal to 0 if they are not already so.
        if (same[i] != 0) {
            return false;
        }
    }
    return true; // Returns true if all characters are equal; hence they are anagrams, and false otherwise.
}
/*         END OF FUNCTION DEFINITION          */