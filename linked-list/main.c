#include <stdlib.h>
#include <stdio.h>

typedef struct node_ {
    int data;
    struct node_ *next;
} node;

void traverse(node *ptr) {
    printf("linked list : ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

node *insertAtFirst(node *head, int value) {
    node *ptr = (node*)malloc(sizeof(node));
    ptr->next = head;
    ptr->data = value;
    return ptr;
}

node *insertAtIndex(node *head, int value, int index) {
    if (index <= 0) {
        printf("get lost\n");
        exit(EXIT_FAILURE);
    } else {
        node *ptr = (node*)malloc(sizeof(node));
        node *p = head;
        int i = 0;

        while (i != index-1) {
            p = p->next;
            i++;
        }

        ptr->data = value;
        ptr->next = p->next;
        p->next = ptr;
        return head;
    }
}

node *insertAtEnd(node *head, int value) {
    node *ptr = (node*)malloc(sizeof(node));
    ptr->data = value;
    node *p = head;

    while (p->next != NULL) {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
    return head;
}

node *deleteFirstNode(node *head) {
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

node *deleteIndexNode(node *head, int index) {
    node *p = head;
    node *q = head->next;

    for (int i = 0; i < index-1; i++) {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}

node *deleteEndNode(node *head) {
    node *p = head;
    node *q = head->next;

    while (q->next != NULL) {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

node *deleteValueInNode(node *head, int value) {
    node *p = head;
    node *q = head->next;

    while (q->data != value && q->next != NULL) {
        p = p->next;
        q = q->next;
    }

    if (q->data == value) {
        p->next = q->next;
        free(q);
    }

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

int main() {
    int choice;
    int value;
    int index;

    node *head = (node*)malloc(sizeof(node));
    head->next = NULL;

    while (choice != 9) {
        printf("press 1 to insert at beginning\npress 2 to insert at middle\npress 3 to insert at last\n");
        printf("press 4 to delete from beginning\npress 5 to delete from middle\npress 6 to delete from last\n");
        printf("press 7 to delete by value\n");
        printf("press 8 to display\n");
        printf("press 9 to exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nenter the value you wanna insert: ");
                scanf("%d", &value);
                head = insertAtFirst(head, value);
                printf("inserted\n");
                break;
            case 2:
                printf("enter the index in which you wanna insert: ");
                scanf("%d", &index);
                printf("\nenter the value you wanna insert: ");
                scanf("%d", &value);
                head = insertAtIndex(head, value, index);
                printf("inserted\n");
                break;
            case 3:
                printf("\nenter the value you wanna insert: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                printf("inserted\n");
                break;
            case 4:
                head = deleteFirstNode(head);
                printf("deleted\n");
                break;
            case 5:
                printf("enter the index you wanna delete: ");
                scanf("%d", &index);
                head = deleteIndexNode(head, index);
                printf("deleted\n");
                break;
            case 6:
                head = deleteEndNode(head);
                printf("deleted\n");
                break;
            case 7:
                printf("enter the value you wanna delete: ");
                scanf("%d", &value);
                head = deleteValueInNode(head, value);
                printf("deleted\n");
                break;
            case 8:
                traverse(head);
                break;
            case 9:
                printf("exiting\n");
                exit(EXIT_SUCCESS);
            default:
                printf("enter correctly\n");
        }
    }

    return 0;
}
