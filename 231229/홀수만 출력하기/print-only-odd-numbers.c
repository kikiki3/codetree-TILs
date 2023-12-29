#include <stdio.h>

int main() {
    int n, tmp;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d\n", &tmp);

        if (tmp % 2 == 1 && tmp % 3 == 0) {
            printf("%d\n", tmp);
        }
    }
}