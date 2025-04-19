#include<stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if(rear == MAX_SIZE - 1) {
        printf("Overflow condition\n");
    } else {
        if(front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = x;
    }
}

int dequeue() {
    if(front == -1 && rear == -1) {
        printf("Queue is empty\n");
        return -1; // Return a sentinel value indicating underflow
    } else {
        int x = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return x;
    }
}

void display() {
    if(front == -1 && rear == -1) {
        printf("Empty queue\n");
    } else {
        printf("Queue elements: ");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(3);
    enqueue(4);
    enqueue(8);
    enqueue(9);

    display();

    printf("Dequeued element is %d\n", dequeue());
    printf("Dequeued element is %d\n", dequeue());

    enqueue(13);
    enqueue(14);

    display();

    return 0;
}
