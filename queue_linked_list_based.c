o#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *front = NULL, *rear = NULL, *newNode, *temp;
void enqueue(int value) {
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if(front == NULL) {
        front = newNode;
        rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}
int dequeue() {
    if (front == NULL) {
        printf("Queue is empty");
        return -1;
    } else {
        int value = front->data;
        front = front->next;
        return value;
    }
}
// Function to display the elements of the queue
void display() {
    temp = front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main() {
    printf("Dequeued element is %d \n", dequeue());
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    printf("Elements in the queue: ");
    display();
    printf("\n");
    printf("Dequeued element is %d \n", dequeue());
    printf("Dequeued element is %d \n", dequeue());
    enqueue(5);
    enqueue(7);
    printf("Elements in the queue after enqueue: ");
    display();

    return 0;
}
