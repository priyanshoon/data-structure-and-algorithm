#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) { 
    int i, j;
    bool swapped;
    for(i = 0; i < n - 1; i++) {
        swapped = false;
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            break;
        }
    }
}

void print_arr(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("arr before \n");
    print_arr(arr, n);
    bubble_sort(arr, n);
    printf("arr after \n");
    print_arr(arr, n); 

    return 0;
}
