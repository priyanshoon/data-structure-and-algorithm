#include<stdio.h>
#include<stdbool.h>

void insertion_sort(int arr[], int n) {
    int i, j;
}

void print_arr(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("------------- INSERTION SORT ------------- \n");
    int arr[] = { 12, 54, 65, 7, 23, 9 };
    int n = 6;
    print_arr(arr, n);
    return 0;
}
