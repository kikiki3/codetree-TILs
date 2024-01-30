#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a, b;

    for (int i = 0; i < n; i++) {
        int x = 1;
        scanf("%d %d", &a, &b);
        for (int j = a; j <= b; j++) {
            x *= j;
        }
        printf("%d\n", x);
    }
}