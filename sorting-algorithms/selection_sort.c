#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n) {
    int i, j, sel;
    for(i = 0; i < n - 1; i++) {
        sel = i;
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[sel]) {
                sel = j;
            }

            if(sel != i) {
                swap(&arr[sel], &arr[i]);
            }
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
    selection_sort(arr, n);
    printf("arr after \n");
    print_arr(arr, n); 
    return 0;
}
