#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int number;
    struct node *next;
}
node;

bool search(node *tree, int number){
    if (tree == NULL){
        return false;
    }
    else if (number < tree->number){
        return search(tree->left, number);
    }
    else if (number > tree->number){
        return search(tree->right, number);
    }
    else {
        return true;
    }
}
