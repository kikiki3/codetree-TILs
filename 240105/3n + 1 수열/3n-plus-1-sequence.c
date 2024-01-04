#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;

    while (1) {
        if (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            }
            else {
            n = (n*3) + 1;
            }
        cnt++;
        }
    
        if (n == 1)
        break;
    }
    printf("%d", cnt);
}