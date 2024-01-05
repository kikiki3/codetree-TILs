#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            printf("YES");
        }
    }
}