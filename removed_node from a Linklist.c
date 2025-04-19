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
    printf("\n\nEnter a value for Deleting: \n");
    int x;
    scanf("%d", &x);
    if(head->data == x) {
        head = head->next;
    } else {
        struct Node* temp = NULL;
        struct Node* current = head;
        while(current->next != NULL) {
            if(current->next->data == x) {
                temp = current->next;
                current->next = temp->next;
                break;
            }
            current = current->next;
        }
    }
    printf("Linked List After delating: ");
    printList(head);
    return 0;
}
