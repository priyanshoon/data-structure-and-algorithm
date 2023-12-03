#include <stdio.h>
#include <stdlib.h>

typedef struct node_ {
    int data;
    struct node_ *next;
} node;

void traverse(node *ptr) {
    node *temp = ptr;
    printf("circular linked list: ");

    do {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    } while (ptr != temp);

    printf("END LINKED LIST\n");
}

node *insertAtFirst(node *head, int value) {
    node *ptr = (node*)malloc(sizeof(node));
    ptr->data = value;

    node *p = head->next;
    while (p->next != head) {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

int main(int argc, char *argv[]) {
    node *head = (node*)malloc(sizeof(node));
    node *a1 = (node*)malloc(sizeof(node));
    node *a2 = (node*)malloc(sizeof(node));
    node *a3 = (node*)malloc(sizeof(node));
    node *a4 = (node*)malloc(sizeof(node));

    head->data = 69;
    head->next = a1;

    a1->data = 79;
    a1->next = a2;

    a2->data = 89;
    a2->next = a3;

    a3->data = 99;
    a3->next = a4;

    a4->data = 109;
    a4->next = head;

    traverse(head);
    head = insertAtFirst(head, 88);
    traverse(head);

    return 0;
}
