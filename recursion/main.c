#include <stdio.h>

void print_name(int i) {
    if (i == 10) {
        return;
    }
    printf("Priyanshu Prasad Gupta\n");
    print_name(i+1);
}

void print_linear(int i, int n) {
    if (i == n) {
        return ;
    }
    printf("%d ", i);
    print_linear(i + 1, n);
}

void print_linear_backtracking(int i, int n) {
    if(i < 1) {
        return ;
    }
    print_linear(i-1, n);
    printf("%d ", i);
}

int main() {
    print_linear_backtracking(3, 3);
    printf("\n");
    return 0;
}
