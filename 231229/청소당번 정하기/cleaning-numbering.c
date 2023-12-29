#include <stdio.h>

int main() {
    int n;
    int a = 0, b = 0, c = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        if ((i % 2 == 0 && i % 12 == 0) || (i % 3 == 0 && i % 12 == 0)) {
            c++;
        }
        else if (i % 3 == 0 || i % 2 == 0 && i % 3 == 0) {
            b++;
        }
        else if (i % 2 == 0) {
            a++;
        }
    }

    printf("%d %d %d", a, b, c);
}