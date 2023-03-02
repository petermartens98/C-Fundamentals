#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int number;
    struct node *next;
}
node;

int main (int argc, char *argv[]) 
{
    node *list = NULL;

    for (int i; i <argc; i++)
    {
        int number = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        list = n;
    }

    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

}