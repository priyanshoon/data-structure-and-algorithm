#include <stdio.h>

// reverse the array

int *reverseArray(int a_count, int *a) {
    int middle = a_count / 2;
    for(int i = a_count - 1; i >= middle; i--) {
        int temp = a[i];
        a[i] = a[a_count - i - 1];
        a[a_count - i - 1] = temp;
    }
    return a;
}

int main() {
    int num;

    scanf("%d", &num);
    int arr[num];

    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(num, arr);

    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
