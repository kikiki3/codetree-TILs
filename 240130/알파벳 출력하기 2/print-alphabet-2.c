#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = 65;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("%c ", x);
            x++;
            if (x > 90) {
                x = 65;
            }
        }
        printf("\n");
    }
}