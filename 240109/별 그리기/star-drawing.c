#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = n - (i + 1); j > 0; j--) {
            printf(" ");
        }
        for (int j = (2*i)+1; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > 0; j--) {
            printf(" ");
        }
        for (int j = (2*n)-(2*i)-3; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
}