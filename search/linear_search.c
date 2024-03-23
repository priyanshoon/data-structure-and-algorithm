#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr, int size, int key) {
    int result;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            result = i;
            break;
        } else {
            result = -1;
        }
    }
    return result;
}

int main() {
    int *arr;
    int size, result;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int*)malloc(sizeof(int)*size);

    printf("Enter the array: \n");
    for (int i = 0; i < size; i++) {
        printf("Input %d: ", i);
        scanf("%d", &arr[i]);
    }

    result = linear_search(arr, size, 3);

    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found in index %d\n", result);
    }

    return 0;
}
