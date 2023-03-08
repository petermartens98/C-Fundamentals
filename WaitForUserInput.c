#include <stdio.h>

int main() {
    char c;

    printf("Press any key to continue...\n");
    while ((c = getchar()) == '\n') {} // wait for user input

    printf("You pressed '%c'\n", c);

    return 0;
}
