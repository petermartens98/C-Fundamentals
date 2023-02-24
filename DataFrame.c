#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person people[3];

    strcpy(people[0].name, "John");
    people[0].age = 30;
    people[0].height = 1.75;

    strcpy(people[1].name, "Mary");
    people[1].age = 25;
    people[1].height = 1.68;

    strcpy(people[2].name, "Bob");
    people[2].age = 40;
    people[2].height = 1.82;

    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Age: %d, Height: %.2f\n", people[i].name, people[i].age, people[i].height);
    }

    return 0;
}
