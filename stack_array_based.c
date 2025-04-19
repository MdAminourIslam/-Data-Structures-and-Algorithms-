#include<stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

void push(int x) {
    if (top < MAX_SIZE - 1) {
        top++;
        stack[top] = x;
    } else {
        printf("Overflow\n");
    }
}

int pop() {
    if (top >= 0) {
        int x = stack[top];
        top--;
        return x;
    } else {
        printf("Underflow\n");
        return -1; // Return a sentinel value indicating underflow
    }
}

int main() {
    printf("Enter number of element :");
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int value; scanf("%d", &value);
        push(value);
    }

    for (int i = 0; i < 2; i++) {
        int x = pop();
        printf("Popped element is %d\n", x);
    }

    // Print remaining elements in the stack
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}

