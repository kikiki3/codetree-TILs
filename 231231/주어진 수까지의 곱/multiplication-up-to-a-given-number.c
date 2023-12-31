#include <stdio.h>

int main() {
    int prod = 1;
    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        prod *= i;
    }
    printf("%d", prod);
}