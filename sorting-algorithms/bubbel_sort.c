#include <stdio.h>

void swap(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int n) { 

    int a;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    return 0;
}
