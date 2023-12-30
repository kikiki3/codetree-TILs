#include <stdio.h>

int main() {
    int a, b;
    int cnt = 0;

    scanf("%d %d", &a, &b);

    if (a < b) {
        for (int i = a; i <= b; i++) {
            if (i % 5 == 0) {
                cnt += i;
            }
        }
    }
    else if (b <= a) {
        for (int i = b; i <= a; i++) {
            if (i % 5 == 0) {
                cnt += i;
            }
        }
    }

    printf("%d", cnt);
    
}