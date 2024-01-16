#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    int dnt = 2*n+1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                cnt++;
                printf("%d ", cnt);
                if (cnt == (i+1)*n) {
                    cnt = cnt+(i+1)*n;
                }
            }
            else if (i % 2 == 1) {
                
                dnt--;
                printf("%d ", dnt);
                if (dnt == (i)*(n+1)+1) {
                    dnt = n*(i+3);
                }
            }
        }
        printf("\n");
    }
}