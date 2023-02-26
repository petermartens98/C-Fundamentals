#include <stdio.h>

float average(int array[], const int n);

int main(void){

    int score, n;

    printf("Enter # of Scores: ");
    scanf("%d", &n);
    
    int scores[n];

    for (int i = 0; i < n; i++){
        printf("Enter Score: ");
        scanf("%d", &score);
        scores[i] = score;
    }
    printf("The average score is: %.2f\n", average(scores, n));
    return 0;
}


float average(int array[], const int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += array[i];
    }
    return (float) sum / n; 
}
