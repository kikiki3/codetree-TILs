#include <stdio.h>

int main() {
    int n;
    int j = 0;
    scanf("%d", &n);

    while (1) {
        if (n != 1) {
            n /= 2;
            j++;
        }
        if (n == 1)
        break;
    }
    printf("%d", j);
}