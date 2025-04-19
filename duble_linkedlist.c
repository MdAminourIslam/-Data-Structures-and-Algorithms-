#include <stdio.h>
#include <stdlib.h>

struct DoubleNode {
    int value;
    struct DoubleNode *next;
    struct DoubleNode *prev;
};

int main() {
    struct DoubleNode *head = NULL, *current = NULL;
    printf("Enter the number of nodes: ");
    int numNodes;
    scanf("%d", &numNodes);
    for(int i = 1; i <= numNodes; i++) {
        struct DoubleNode *newNode = (struct DoubleNode *)malloc(sizeof(struct DoubleNode));
        if(newNode == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter value for node %d: ", i);
        scanf("%d", &newNode->value);
        newNode->next = NULL;
        newNode->prev = current;

        if(head == NULL) {
            head = newNode;
        } else {
            current->next = newNode;
        }
        current = newNode;
    }
    printf("Doubly Linked List: ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    return 0;
}

