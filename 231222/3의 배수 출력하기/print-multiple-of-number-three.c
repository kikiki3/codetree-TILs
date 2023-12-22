#include <stdio.h>

int main() {
    int i = 0;
    int n;

    scanf("%d", &n);

    while (i < n) {
        i+=3;
        printf("%d ", i);
    }
}