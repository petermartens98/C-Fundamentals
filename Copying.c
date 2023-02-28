#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char source[MAX_LENGTH];
    char destination[MAX_LENGTH];

    printf("Enter a string to copy: ");
    fgets(source, MAX_LENGTH, stdin);

    // Ensure null-termination of the source string
    source[strcspn(source, "\n")] = '\0';

    // Copy the source string to the destination string
    strcpy(destination, source);

    printf("Copied string is: %s\n", destination);

    return 0;
}