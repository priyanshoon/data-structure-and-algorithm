#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int *arr, int size) {
    bool flag;
    for (int i = 0; i < size - 1; i++) {
        flag = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false) {
            break;
        }
    }
}

int binary_search(int *arr, int size, int key) {
    int low = 0, mid, high = size - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
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

    bubble_sort(arr, size);

    printf("Array Sorted : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    result = binary_search(arr, size, 3);

    if (result == -1) {
        printf("\nElement not found\n");
    } else {
        printf("\nElement found in index %d\n", result);
    }

    return 0;
}
