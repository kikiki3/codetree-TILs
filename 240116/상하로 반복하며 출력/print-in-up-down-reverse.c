#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % 2 == 1) {
                printf("%d", i);
            }
            else if (j % 2 == 0) {
                printf("%d", n - i + 1);
            }
        }
        printf("\n");
    }
}