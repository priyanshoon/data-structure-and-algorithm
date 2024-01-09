#include <stdio.h>

int main() {
    char a[10][2];
    for(int i = 0; i < 10; i++) {
        scanf("%s", a[i]);
    }
    for(int i = 0; i < 10; i++) {
        printf("%s\n", a[i]);
    }
    return 0;
}
