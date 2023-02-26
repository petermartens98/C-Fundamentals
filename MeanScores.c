#include <stdio.h>

int main(void){
    /* 
    int score1 = 72;
    int score2 = 73;
    int score3 = 43;
    int scores[3] = {score1, score2, score3};
    */

    /*    
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 43;
    */

    int num_scores;
    int score;

    int sum = 0;
    float avg = 0;

    printf("Enter # of Scores: ");
    scanf("%d", &num_scores);
    
    int scores[num_scores];

    for (int i = 0; i < num_scores; i++){
        printf("Enter Score: ");
        scanf("%d", &score);
        scores[i] = score;
        sum += score;
    }

    if (num_scores > 0) {
        avg = (float) sum / num_scores;
    }

    printf("The average score is: %.2f\n", avg);
    return 0;

}
