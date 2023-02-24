#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, sum;
    int precision1, precision2;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);


    sum = num1 + num2;

    printf("Sum of %f and %f is %f\n", num1, num2, sum);

    return 0;
}