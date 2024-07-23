#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int cnt = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 1) {
                arr[n-j-1][i] = cnt;
            }
            else {
                arr[j][i] = cnt;
            }
            cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}