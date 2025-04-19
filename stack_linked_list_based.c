#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *list = NULL, *newNode, *temp;

int push(int x) {
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    if(list == NULL) {
        list = newNode;
    } else {
        newNode->next = list;
        list = newNode;
    }
    return x;
}

int pop() {
    if(list == NULL) {
        printf("Stack is empty\n");
        return -1; // Return a sentinel value indicating underflow
    } else {
        int value = list->data;
        list = list->next;
        return value;
    }
}

int main() {
    printf("Enter number of element :");
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int value; scanf("%d", &value);
        printf("Pused element is = %d\n", push(value));
    }

    for(int i = 1; i <= 4; i++) {
        int x;
        x = pop();
        printf("Popped element is = %d\n", x);
    }

    while(list != NULL) {
        printf("%d ", list->data);
        list = list->next;
    }

    return 0;
}
