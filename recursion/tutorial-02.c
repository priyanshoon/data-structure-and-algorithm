#include <stdio.h>
#include <stdlib.h>

// Multiple recursion call tutorial
int febonacci(int n) {
    if (n <= 1) return n;
    int last = febonacci(n - 1);
    int slast = febonacci(n - 2);
    return last + slast;
}

int main(void) {
    int n = 4;
    printf("%d \n", febonacci(n));
    return 0;
}
