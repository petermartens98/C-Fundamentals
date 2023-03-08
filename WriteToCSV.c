#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char name[50];
    char email[256];
    int i, n;

    // Connect to CSV
    fp = fopen("users.csv", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Determine Number of users to input
    printf("Enter the number of people: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input\n");
        return 1;
    }

    // Populate the CSV file with names and email addresses
    for (i = 1; i <= n; i++) {
        printf("Enter Name %d: ", i);
        scanf("%s", name);
        printf("Enter Email %d: ", i);
        scanf("%s", email);
        fprintf(fp, "%s,%s\n", name, email);
    }

    fclose(fp);
    return 0;
}
