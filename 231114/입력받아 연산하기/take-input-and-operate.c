#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    a += 87;
    b %= 10;
    printf("%d\n%d", a, b);
    return 0;
}