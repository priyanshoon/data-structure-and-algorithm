#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr) {
    if (ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int isFull(struct stack *ptr) {
    if (ptr->top == ptr->size - 1) {
        return 1;
    } else {
        return 0;
    }
}

void push(struct stack *ptr, int val) {
    if(isFull(ptr)) {
        printf("The stack is full\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The stack is already empty dumbo!\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int i) {
    int arrIndex = ptr->top - i + 1;
    if(arrIndex < 0) {
        printf("Not the valid position for the stack\n");
        return -1;
    } else {
        return ptr->arr[arrIndex];
    }
}

int main() {
    struct stack *s;

    s->size = 80;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    if (isEmpty(s)) {
        printf("The stack is empty\n");
    } else {
        printf("The stack is not empty\n");
    }

    s->arr[0] = 7;
    s->top++;

    if (isEmpty(s)) {
        printf("The stack is empty\n");
    } else {
        printf("The stack is not empty\n");
    }

    return 0;
}
