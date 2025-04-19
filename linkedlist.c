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

int search_Node(struct Node* head, int value) {
    struct Node *temp = head;
    while(temp != NULL) {
        if(temp->data == value) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
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

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
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

    printf("\n\nEnter a value for searching: \n");
    int x;
    scanf("%d", &x);
    if(search_Node(head, x)) {
        printf("Found\n");
    } else {
        printf("Not Found!\n");
    }

    return 0;
}
