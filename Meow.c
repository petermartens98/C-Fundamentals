#include <stdio.h>

int main(void) {

    printf("For Loop Implementation\n");
    for (int i = 0; i < 3; i++){
        printf("Meow\n");
    }

    printf("\nWhile Loop Implementation\n");
    int i = 0;
    while (i < 3){
        printf("Meow\n");
        i++;
    }

    /* Forever Loop
    while(1){
        printf("Meow\n")
    }
    */

    return 0;
}
