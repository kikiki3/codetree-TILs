#include <stdio.h>

int main() {
    int cnt = 0, n;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d\n", &n);

        if (n % 2 == 1) {
            cnt++;
        }
    }
    printf("%d", cnt);

}