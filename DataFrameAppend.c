#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person people[10];  // Increase array size to allow for more people

    // Initialize the first three people
    strcpy(people[0].name, "John");
    people[0].age = 30;
    people[0].height = 1.75;

    strcpy(people[1].name, "Mary");
    people[1].age = 25;
    people[1].height = 1.68;

    strcpy(people[2].name, "Bob");
    people[2].age = 40;
    people[2].height = 1.82;

    int num_people = 3;

    char choice;
    do {
        printf("\nEnter a new person (y/n)? ");
        scanf(" %c", &choice);
        if (choice == 'y') {
            printf("Enter the person's name: ");
            scanf("%s", people[num_people].name);

            printf("Enter the person's age: ");
            scanf("%d", &people[num_people].age);

            printf("Enter the person's height: ");
            scanf("%f", &people[num_people].height);

            num_people++;
        }
    } while (choice == 'y' && num_people < 10);

    for (int i = 0; i < num_people; i++) {
        printf("Name: %s, Age: %d, Height: %.2f\n", people[i].name, people[i].age, people[i].height);
    }

    return 0;
}