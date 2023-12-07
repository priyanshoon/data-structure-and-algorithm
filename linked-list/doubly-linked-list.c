#include <stdio.h>
#include <stdlib.h>

typedef struct node_ {
    int data;
    struct node_ *prv;
    struct node_ *next;
} node;

void traverse(node *ptr) {
    node *temp = ptr;
    printf("circular linked list: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;

    }
    printf("END LINKED LIST\n");
}

void reverse(node *ptr) {
    node *temp = ptr;
    printf("circular linked list: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;

    }
    printf("END LINKED LIST\n");
}

int main(int argc, char *argv[]) {
    node *head = (node*)malloc(sizeof(node));
    node *a1 = (node*)malloc(sizeof(node));
    node *a2 = (node*)malloc(sizeof(node));
    node *a3 = (node*)malloc(sizeof(node));

    head->prv = NULL;
    head->data = 10;
    head->next = a1;

    a1->prv = head;
    a1->data = 20;
    a1->next = a2;

    a2->prv = a1;
    a2->data = 30;
    a2->next = a3;

    a3->prv = a2;
    a3->data = 40;
    a3->next = NULL;

    traverse(head);
    return 0;
}
