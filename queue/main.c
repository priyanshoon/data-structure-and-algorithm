#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue *q) {
    if(q->r == q->f) {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q) {
    if(q->r == q->size-1) {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val) {
    if(isFull(q)) {
        printf("This queue is full\n");
    } else {
        q->r++;
        q->arr[q->r] = val;
        printf("enqueued the element: %d\n", val);
    }
}

int dequeue(struct queue *q) {
    int a = -1;
    if(isEmpty(q)) {
        printf("This queue is empty\n");
    } else {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main() {
    struct queue q;
    q.size = 4;
    q.f = q.r  = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));

    if(isEmpty(&q))
        printf("queue is empty\n");


    // enqueue
    enqueue(&q, 12);
    enqueue(&q, 14);
    enqueue(&q, 15);

    printf("dequeueing element %d\n", dequeue(&q));
    printf("dequeueing element %d\n", dequeue(&q));
    printf("dequeueing element %d\n", dequeue(&q));
    printf("dequeueing element %d\n", dequeue(&q));
    printf("dequeueing element %d\n", dequeue(&q));

    enqueue(&q, 82);
    enqueue(&q, 82);

    return 0;
}
