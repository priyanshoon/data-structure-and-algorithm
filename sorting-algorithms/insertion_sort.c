#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n) {
    int i, j, key;
    for(i = 0; i < n; i++) { 
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertion_sort(arr, n);
    printf("arr after \n");
    print_arr(arr, n); 

    return 0;
}
