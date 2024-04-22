#include <stdio.h>

// functional pointers tutorial
// I will use the sorting algo use case here

int ascending(int a, int b) {
    return a > b;
}

int descending(int a, int b) {
    return a < b;
}

// the compare thing is a functional pointer
// we can add either ascending or descending in place of this functional
// pointer given below
void bubbleSort(int arr[], int size, int(*compare)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (compare(arr[j], arr[j+1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    printf("Pointers explained!!!\n");

    int data[] = {5, 2, 7, 1, 9};

    printf("Origianl array : ");
    printArray(data, 5);

    // sorting array in ascending order
    bubbleSort(data, 5, &ascending);
    printf("Array sorted in ascending order: ");
    printArray(data, 5);

    // sorting array in descending order
    bubbleSort(data, 5, &descending);
    printf("Array sorted in descending order: ");
    printArray(data, 5);

    return 0;
}
