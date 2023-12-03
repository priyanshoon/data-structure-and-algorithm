#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int myStack[MAX];
int top = -1;

void pop() {
    int result;
    if (top == -1) {
        printf("THE STACK IS EMPTY\n");
    }

    result = myStack[top];
    top--;
    printf("the top stack value is %d\n", result);
}

void push(int value) {
    if (top <= MAX - 1) {
        printf("STACK IS FULL\n");
    }

    top++;
    myStack[top] = value;
    printf("%d has been added\n", value);
}

void topp() {
    printf("the value of top is %d\n", myStack[0]);
}

void display() {
    if (top >= 0) {
        for (int i = top; i >= 0; i--) {
            printf("%d\t", myStack[i]);
        }
        printf("\n");
    } else {
        printf("THE STACK IS EMPTY\n");
    }

}

int main() {
    // pop(), push(), top(), isEmpty(), display()
    int choice, value;


    while (choice != 5) {
        printf("press 1 to pop\npress 2 to push\npress 3 to display top\npress 4 to display full stack\n");
        printf("press 5 to exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                pop();
                break;
            case 2:
                printf("Enter the value you wanna push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 3:
                topp();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting\n");
                break;
            default:
                printf("plz reframe your input\n");
        }
    }
    return 0;
}
