#include <stdio.h>
#include <string.h>

int main(void) {
    char *strings[] = {"dog", "cat", "bird", "cow", "monkey", "horse"};
    int list_len = sizeof(strings) / sizeof(strings[0]);
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    for (int i = 0; i < list_len; i++) {
        if (strcmp(strings[i], s) == 0) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
