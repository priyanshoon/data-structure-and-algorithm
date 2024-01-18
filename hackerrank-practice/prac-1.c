#include <stdio.h>
#include <stdlib.h>

typedef struct node_n  {
    int data;
    struct node_n* next;
} node;

node *head = NULL;

node *insertAtFirst(node* head, int data) {
    node *ptr = (node*)malloc(sizeof(node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

void traverse(node *head) {
    node *ptr = head;
    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

node *insertAtEnd(node *head, int data) {
    node *ptr = (node*)malloc(sizeof(node));
    node *p = head;

    ptr->data = data;
    ptr->next = NULL;

    if(p == NULL) {
        return ptr;
    }

    while(p->next != NULL) {
        p = p->next;
    }

    p->next = ptr;
    return head;
}

node *reverse(node *head) {
    node *prev = NULL;
    node *current = head;
    node *next = NULL;

    while(current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

node *deleteNodeAtFirst(node *head) {
    if (head == NULL) {
        printf("The list is empyt\n");
        return 0;
    }

    node *p = head;
    printf("The node with value %d has been deleted\n", p->data);
    p = p->next;
    return p;
}

node *deleteNodeAtEnd(node *head) {
    if (head == NULL) {
        printf("The list is empty\n ");
        return 0;
    }
    node *p = head;
    node *q = head->next;


    while(q->next != NULL) {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    printf("The node with value %d has been deleted\n", q->data);
    free(q);
    return head;
}

int main() {
    head = insertAtFirst(head, 4);
    head = insertAtFirst(head, 2);
    head = insertAtFirst(head, 8);
    head = insertAtFirst(head, 5);
    traverse(head);
    head = deleteNodeAtFirst(head);
    traverse(head);
    return 0;
}
