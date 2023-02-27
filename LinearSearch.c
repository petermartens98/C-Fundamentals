#include <stdio.h>

int main(void){
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int num_len = sizeof(numbers)/sizeof(numbers[0]);
    int n;
    printf("Enter Number: ");
    scanf("%i", &n);
    for (int i = 0; i < num_len; i++){
        if (numbers[i] == n) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
