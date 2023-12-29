#include <stdio.h>

int main() {
    int n, cnt = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d\n", &n);

        if (n % 2 == 0) {
            cnt++;
        }
    }
    printf("%d", cnt);
}