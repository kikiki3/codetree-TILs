#include <stdio.h>

int main() {
    int n, cnt = 0, m;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d\n", &m);

        if (m % 2 != 0 && m % 3 == 0) {
            cnt += m;
        }
    }

    printf("%d", cnt);
}