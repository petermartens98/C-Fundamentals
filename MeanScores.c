#include <stdio.h>

int main(void){
    int score1 = 72;
    int score2 = 73;
    int score3 = 43;
    int scores[3] = {score1, score2, score3};

    int sum = 0;
    float avg = 0;
    int num_scores = sizeof(scores) / sizeof(scores[0]);

    for (int i = 0; i < num_scores; i++) {
        sum += scores[i];
    }

    if (num_scores > 0) {
        avg = (float) sum / num_scores;
    }

    printf("The average score is: %.2f\n", avg);
    return 0;

}
