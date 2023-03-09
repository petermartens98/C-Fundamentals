#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);
    
    int number = (current_time->tm_year + 1900) * 100000000 +
                 (current_time->tm_mon + 1) * 1000000 +
                 current_time->tm_mday * 10000 +
                 current_time->tm_hour * 100 +
                 current_time->tm_min * 1 +
                 current_time->tm_sec;
                 
    printf("Generated number: %d\n", number);

    return 0;
}
