#include <stdio.h>

int main() {
    int a, b;
    int cnt = 0;
    int cnt1 = 0;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            cnt += i;
            cnt1++;
        }
    }
    printf("%d %.1lf", cnt, (float)cnt / cnt1);
}