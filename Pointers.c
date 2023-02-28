#include <stdio.h>

int main (void) {
    int n = 50;
    int *p = &n;
    // Print Memory Andress
    printf("%p\n", p);

    // Print value of P
    printf("%i\n\n", *p);

    // String Pointers
    char *s = "HI!";

    printf("%p\n\n", s);

    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n\n", &s[3]);

    printf("%s\n", s);
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n\n", s[2]);

    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}