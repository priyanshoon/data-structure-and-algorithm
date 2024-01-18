#include <stdio.h>
#include <stdlib.h>

typedef struct node_n {
    int data;
    struct node_n* next;
} node;

node *head = NULL;

void traverse(node *head) {
    node *ptr = head;
    printf("Linked List: ");
    while (ptr != NULL) {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL \n");
}

node *insertnode(node *head, int value) {
    node *ptr = (node*)malloc(sizeof(node));
    ptr->next = head;
    ptr->data = value;
    return ptr;
}

node *deletenode(node *head) {
    if (head == NULL) {
        printf("The list is empyt\n");
        return 0;
    }

    node *p = head;
    printf("The node with value %d has been deleted\n", p->data);
    p = p->next;
    return p;
}

int main() {
    head = insertnode(head, 94);
    head = insertnode(head, 24);
    head = insertnode(head, 34);
    head = insertnode(head, 44);
    head = insertnode(head, 54);
    head = deletenode(head);
    traverse(head);
    return 0;
}
