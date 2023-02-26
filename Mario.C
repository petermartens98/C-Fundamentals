// Mario Bricks Program inspired CS50 Lecture 1 - C (2022)

#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void) {
    // Get Size of Grid
    int n = get_size();

    // Draw Grid of Bricks
    print_grid(n);

    return 0;
}

// Function to Get Size
int get_size(void)
{
    int n;
    do {
        printf("Enter Size: ");
        scanf("%d", &n);
    } 
    while ( n < 1);
    return n;
}

// Function to Print Grid of Blocks
void print_grid(int size) {
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            printf("#");
        }
        printf("\n");
    }
}
