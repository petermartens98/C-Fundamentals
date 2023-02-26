#include <stdio.h>

int main() {
    char response;
    printf("Do you agree? (Y/N): ");
    scanf(" %c", &response);
    if (response == 'y' || response == 'Y') {
        printf("Agreed\n");
    } else if (response == 'n' || response == 'N') {
        printf("Not agreed\n");
    } else {
        printf("Invalid input\n");
    }
    return 0;
}