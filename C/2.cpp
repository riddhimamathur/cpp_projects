#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;
#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

void insertAtBottom(int x) {
    if (top == -1) {
        push(x);
        return;
    }
    int temp = pop();
    insertAtBottom(x);
    push(temp);
}

void reverseStack() {
    if (top == -1)
        return;
    int temp = pop();
    reverseStack();
    insertAtBottom(temp);
}

void display() {
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    printf("Before Reverse: ");
    display();

    reverseStack();

    printf("\nAfter Reverse: ");
    display();

    return 0;
}
