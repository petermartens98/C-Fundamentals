#include <stdio.h>
#include <string.h>

typedef struct {
    char *name;
    char *number;
} person;

int main(void) {
    person people[] = {
        {"Peter", "123-456-7890"},
        {"Leo", "098-893-4512"},
        {"Jimmy", "111-222-3333"}
    };

    char name[100];
    printf("Enter Name: ");
    scanf("%s", name);

    int index = -1;
    for (int i = 0; i < sizeof(people) / sizeof(people[0]); i++) {
        if (strcmp(people[i].name, name) == 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("The number for %s is %s\n", people[index].name, people[index].number);
    } else {
        printf("Name not found\n");
    }

    return 0;
}
