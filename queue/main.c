#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int front, rare, size;
    unsigned capacity;
    int *array;
};

struct Queue *createQueue(unsigned capacity) {
    struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    queue->rare = capacity - 1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
