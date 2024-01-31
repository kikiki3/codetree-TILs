#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a, b;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        int cnt = 0;
        for (int j = a; j <= b; j++) {
            if (j % 2 == 0) {
                cnt += j;
            }
        }
        printf("%d\n", cnt);
    }
}