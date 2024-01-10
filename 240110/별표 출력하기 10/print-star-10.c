#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 1 + (i/2); j++) {
                printf("* ");
            }
        }
        if (i % 2 == 1) {
            for (int j = n - (i - 1) / 2; j > 0; j--) {
                printf("* ");
            }
        }
        printf("\n");
    }

    for(int i = n; i < 2*n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < 1 + (i/2); j++) {
                printf("* ");
            }
        }
        if (i % 2 == 1) {
            for (int j = n - (i - 1)/2; j > 0; j--) {
                printf("* ");
            }
        }
        printf("\n");
    }
}