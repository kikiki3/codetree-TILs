#include <stdio.h>

int main() {
    int n, cnt = 0, tmp = 0;
    
    for (int i=0; i < 10; i++) {
        scanf("%d\n", &n);

        if (n % 3 == 0 && n % 5 == 0) {
            cnt++;
            tmp++;
        }
        else if (n % 3 == 0) {
            cnt++;
        }
        else if (n % 5 == 0) {
            tmp++;
        }
    }
    printf("%d %d", cnt, tmp);
}