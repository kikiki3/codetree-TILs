#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d.", a/b);

    for (int i=0; i < 20; i++) {
        a %= b;
        a *= 10;
        printf("%d", a / b);
        
    }
}