#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((cnt*2)%10 == 0) {
                cnt+=1;
            }
            printf("%d ", (cnt*2)%10);
            cnt++;
        }
        printf("\n");
    }
}