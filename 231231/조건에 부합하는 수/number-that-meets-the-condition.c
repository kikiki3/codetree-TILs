#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int n;
    int m;


    for (int i = 1; i <= a; i++) {
        n = i / 8;
        m = i % 7;
        if (i % 2 == 0 && i % 4 != 0 || n % 2 == 0 || m < 4)
        continue;

        printf("%d ", i);
    }
}