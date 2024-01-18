#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q) {
    if((q->r + 1) % q->size == q->f) {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q) {
    if(q->f == q->r) {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int value) {
    if(isFull(q)) {
        printf("Overflow!\n");
        return ;
    }

    q->r = (q->r + 1) % q->size;
    q->arr[q->r] = value;
    printf("Enqueued Element: %d\n", value);
}

int dequeue(struct queue *q) {
    int val = -1;
    if(isEmpty(q)) {
        printf("Underflow!\n");
    } else {
        q->f = (q->f + 1) % q->size;
        val = q->arr[q->f];
    }
    return val;
}

int main() {
    struct queue q;
    q.size = 4;
    q.f = q.r  = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));

    printf("~~~~~~~~~~~~~~~ Circular Queue ~~~~~~~~~~~~~~~~~\n");

    enqueue(&q, 23);
    enqueue(&q, 24);
    enqueue(&q, 44);
    enqueue(&q, 77);
    enqueue(&q, 77);

    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    return 0;
}
