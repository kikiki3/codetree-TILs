#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
}