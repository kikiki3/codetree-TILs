#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 2) {
        printf("28");
    }
    else if (n <= 7 && n % 2 == 1 || n >= 7 && n % 2 == 0) {
        printf("31");
    }
    else {
        printf("30");
    }
}