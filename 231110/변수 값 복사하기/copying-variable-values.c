#include <stdio.h>

int main() {
    int a = 5, b = 4, c = 3;
    a = b = c;
    printf("%d %d %d", a, b, c);
    return 0;
}