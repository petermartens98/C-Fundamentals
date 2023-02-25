#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char noun[20], verb[20], adjective[20], adverb[20];

    printf("Enter a noun: ");
    scanf("%s", noun);

    printf("Enter a verb ending in 'ing': ");
    scanf("%s", verb);

    printf("Enter an adjective: ");
    scanf("%s", adjective);


    // Make sure the verb ends in "ing"
    int len = strlen(verb);
    if (len >= 3 && strcmp(&verb[len-3], "ing") != 0) {
        printf("Error: verb must end in 'ing'.\n");
        return 1;
    }

    // Capitalize the first letter of the noun and adjective
    noun[0] = toupper(noun[0]);
    adjective[0] = toupper(adjective[0]);

    // Print the Mad Libs story
    printf("%s %s %s %s.\n", adjective, verb, "the", noun);
    printf("It was a %s day, and the %s was %s.\n", adjective, noun, verb);

    return 0;
}