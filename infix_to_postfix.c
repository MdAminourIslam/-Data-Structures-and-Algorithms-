#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

void infix_to_postfix(char *infix, char *postfix) {
    char stack[MAX_SIZE];
    int top = -1;
    int i, j;

    for(i = 0, j = 0; infix[i] != '\0'; i++) {
        if((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= '0' && infix[i] <= '9')) {
            postfix[j++] = infix[i];
        } else if(infix[i] == '(') {
            stack[++top] = infix[i];
        } else if(infix[i] == ')') {
            while(top != -1 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            top--;
        } else {
            while(top != -1 && stack[top] != '(' && precedence(stack[top]) >= precedence(infix[i])) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }

    while(top != -1) {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0';
}
int main() {
    char infix[MAX_SIZE];
    printf("Enter infix expression: ");
    fgets(infix, MAX_SIZE, stdin);
    // Remove newline character if present
    if(infix[strlen(infix) - 1] == '\n')
        infix[strlen(infix) - 1] = '\0';

    char postfix[MAX_SIZE];
    infix_to_postfix(infix, postfix);
    printf("Infix Expression: %s\n", infix);
    printf("Postfix Expression: %s\n", postfix);
    return 0;
}
