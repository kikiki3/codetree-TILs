#include <stdio.h>

int main() {
    int n, cnt = 0;
    scanf("%d", &n);

    for (int i = n; i <= 100; i++) {
        cnt += i;
    }
    printf("%d", cnt);
}