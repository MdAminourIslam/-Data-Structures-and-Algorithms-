#include <stdio.h>
#include <string.h>

#define MAX_SIZE 400

char stack[MAX_SIZE];
int top = -1;

void push(char c) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = c;
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow condition\n");
    } else {
        top--;
    }
}

int is_balanced(char ch1, char ch2) {
    return (ch1 == ')' && ch2 == '(') || (ch1 == '}' && ch2 == '{') || (ch1 == ']' && ch2 == '[');
}

int is_bracket(int ch) {
    return ch != '(' && ch != ')' && ch != '{' && ch != '}' && ch != '[' && ch != ']';
}

int main() {
    char ch[MAX_SIZE];
    printf("Enter a string: ");
    fgets(ch, sizeof(ch), stdin);
    printf("Length is = %lu\nString is = %s", strlen(ch), ch);

    int isBalanced = 1;
    for (int i = 0; i < strlen(ch); i++) {
        char c = ch[i];
        if (is_bracket(c)) {
            continue;
        }
        if (c == '(' || c == '{' || c == '[') {
            push(c);
        } else {
            if (top == -1) {
                isBalanced = 0;
                break;
            } else {
                if (is_balanced(c, stack[top])) {
                    pop();
                } else {
                    isBalanced = 0;
                    break;
                }
            }
        }
    }

    if (top != -1) {
        isBalanced = 0;
    }

    if (isBalanced) {
        printf("Balanced\n");
    } else {
        printf("Not balanced\n");
    }

    return 0;
}

