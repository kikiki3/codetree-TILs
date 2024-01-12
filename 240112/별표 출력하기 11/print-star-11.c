#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 2*n+1; i++) {
        for (int j = 0; j < 2*n+1; j++) {
            if (j == 0 || j == n-1 || j == 2*(n-1) || i == 0 || i == n-1 || i == 2*(n-1) || j == 2*n || i == 2*n) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}