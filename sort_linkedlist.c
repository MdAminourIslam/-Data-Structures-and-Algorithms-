#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void swap(struct Node* a, struct Node* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

void selection_sort(struct Node* head) {
    struct Node* current = head;
    while(current != NULL) {
        struct Node* minNode = current;
        struct Node* temp = current;
        while(temp != NULL) {
            if(temp->data < minNode->data) {
                minNode = temp;
            }
            temp = temp->next;
        }
        swap(current, minNode);
        current = current->next;
    }
}

int main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    struct Node* head = NULL;
    struct Node* current = NULL;

    for (int i = 1; i <= n; ++i) {
        int value;
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);

        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    printf("Linked List: ");
    printList(head);

    selection_sort(head);

    printf("Linked List After sorting: ");
    printList(head);
    return 0;
}

