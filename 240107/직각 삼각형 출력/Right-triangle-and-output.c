#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        if (i >= 1) {
                for (int m = 1; m <= i; m++) {
                    printf("*");
                }
            }
        printf("\n");
    }
}