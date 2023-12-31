#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {

        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
        continue;

        cnt++;
    }

    printf("%d", cnt);
}