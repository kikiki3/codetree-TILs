#include <stdio.h>

int main() {
    int n;
    int prod = 1;
    int cnt = 0;
    scanf("%d", &n);

    prod = n / 1;

    for (int i = 1; i <= n; i++) {
        prod = prod / i;
        cnt = i;

        if (prod <= 1) {
            cnt = i;
            break;
        }
    }
    printf("%d", cnt);
}