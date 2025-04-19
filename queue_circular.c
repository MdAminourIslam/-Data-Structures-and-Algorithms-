#include<stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1, rear = -1;

void enqueue(int x) {
    if((rear + 1) % MAX_SIZE == front) {
        printf("Overflow condition\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = x;
    }
}

int dequeue() {
    if(front == -1 && rear == -1) {
        printf("Queue is empty\n");
        return -1; // Return a sentinel value indicating underflow
    } else {
        int x = queue[front];
        if(front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
        return x;
    }
}

void display() {
    if(front == -1 && rear == -1) {
        printf("Empty queue\n");
    } else {
        printf("Queue elements: ");
        int i = front;
        while(i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX_SIZE;
        }
        printf("%d\n", queue[rear]);
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
