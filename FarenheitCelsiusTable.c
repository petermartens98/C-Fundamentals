#include <stdio.h>

int main() {
    int lower, upper, step;
    float fahr, cels;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("   F      C\n");
    while (fahr <= upper) {
        cels = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.0f\n", fahr, cels);
        fahr = fahr + step;
    }
}
