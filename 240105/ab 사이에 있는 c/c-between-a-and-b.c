#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    int c;

    scanf("%d %d %d", &a, &b, &c);

    bool satisfied = false;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            satisfied = true;
        }
    }
    if (satisfied == true) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}