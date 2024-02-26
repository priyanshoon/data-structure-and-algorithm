#include <stdio.h>

void first_sum_of_n(int n, int sum) {
    if (n < 0) {
        printf("the sum of first n no is : %d\n", sum);
        return ;
    }
    first_sum_of_n(n-1, sum+n);
}

int main() {
    int n = 3;
    int sum = 0;
    first_sum_of_n(n, sum);
    return 0;
}
