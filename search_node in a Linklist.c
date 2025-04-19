#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
int main() {
    struct node *head = NULL, *current, *temp;
    int n, item, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        current = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &current->data);
        current->next = NULL;

        if (head == NULL) {
            head = current;
        } else {
            temp->next = current;
        }
        temp = current;
    }
    printf("Enter the element to search: ");
    scanf("%d", &item);
    current = head;
    while (current != NULL) {
        if (current->data == item) {
            found = 1;
            break;
        }
        current = current->next;
    }
    if(found) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }
    return 0;
}

