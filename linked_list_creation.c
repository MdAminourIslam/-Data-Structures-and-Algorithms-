#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void add_node(struct Node* head, int value, int x) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    while(head != NULL) {
        if(head->data == value) {
            temp->next = head->next;
            head->next = temp;
            break;
        }
        head = head->next;
    }
}
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
    for(int i = 1; i <= n; ++i) {
        int value;
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            current = head;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }
    printf("Linked List: ");
    printList(head);
    printf("\n\nAdd node after the node :\n");
    int value; scanf("%d", &value);
    printf("\nEnter a data for adding :\n");
    int x; scanf("%d", &x);
    add_node(head, value, x);
    printList(head);
    return 0;
}
