#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;
    scanf("%d %d", &a, &b);

    for (a; a <= b; a++) {
        sum += a;
    }
    printf("%d", sum);
}