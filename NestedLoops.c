#include <stdio.h>

int main(void) {
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
