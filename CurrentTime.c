#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);
    printf("Current date: %02d/%02d/%04d\n", current_time->tm_mday, current_time->tm_mon + 1, current_time->tm_year + 1900);
    printf("Current time: %02d:%02d:%02d\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    return 0;
}
