#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    int n;

    for (int i = 0; i < m; i++) {
        int cnt = 0;
        scanf("%d", &n);
        while (n != 1) {
            if (n % 2 == 0) {
                n = n/2;
            }
            else {
                n = n * 3 + 1;
            }
            cnt++;
        }
        printf("%d\n", cnt);
    }
}