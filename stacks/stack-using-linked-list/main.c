#include <stdio.h>
#include <stdlib.h>

typedef struct node_n {
    int data;
    struct node_n *next;
} node;


int isEmpty(node* top) {
    if(top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

int isFull(node* top) {
    node* p = (node*)malloc(sizeof(node));
    if(p == NULL) {
        return 0;
    } else {
        return 0;
    }
}

node* push(node *top, int x) {
    if(isFull(top)) {
        printf("Stack Overflow!\n");
    } else {
        node* n = (node*)malloc(sizeof(node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(node **top) {
    if(isEmpty(*top)) {
        printf("Stack Underflow!\n");
    } else {
        node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void traverse(node *ptr) {
    printf("linked list : ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(int argc, char *argv[]) {
    node *top = NULL;
    top = push(top, 78);
    top = push(top, 73);
    top = push(top, 45);

    int element = pop(&top);
    printf("The element %d has been poped!\n", element);
    traverse(top);

    return 0;
}
