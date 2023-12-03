#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define EMPTY (-1)
#define STACK_SIZE 5
#define STACK_EMPTY INT_MIN

// Stack Implementation using Array

int mystack[STACK_SIZE];
int top = -1;

bool push(int value) {
    if (top >= STACK_SIZE - EMPTY) return false;

    top++;
    mystack[top] = value;
    return true;
}

int pop() {
    if (top == EMPTY) return STACK_SIZE;

    int result = mystack[top];
    top--;
    return result;
}

void display() {
    if (top >= 0) {
        printf("\nThe elements in the stacks are: \n");
        for (int i = top; i >= 0; i--) {
            printf("%d\t", mystack[i]);
        }
    } else {
        printf("\nStack is empty\n");
    }
}

int main(int argc, char *argv[]) {
    push(56);
    push(78);
    push(98);
    display();
    pop();
    display();
    return 0;
}
