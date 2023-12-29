#include <stdio.h>

int main() {
    //변수 선언
    int a, b, i;

    scanf("%d %d", &a, &b);

    i = a;

    while (i <= b) {
        printf("%d ", i);
        if (i % 2 == 1) {
            i *= 2;
        }
        else {
            i += 3;
        }
    }
    return 0;
}