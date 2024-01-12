#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int minus = n;
    int plus = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = minus; j > 0; j--) {
                printf("* ");
            }
            minus--;
        }
        if (i % 2 == 1) {
            for (int j = plus; j > 0; j--) {
                printf("* ");
            }
            plus++;
        }
        printf("\n");
    }

    for (int i = n; i < 2*n; i++) {
        if (i % 2 == 0) {
            for (int j = minus; j > 0; j--) {
                printf("* ");
            }
            minus--;
        }
        if (i % 2 == 1) {
             for (int j = plus; j > 0; j--) {
                printf("* ");
             }
             plus++;
        }
        printf("\n");
    }
}