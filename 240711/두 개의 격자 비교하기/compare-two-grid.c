#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr_1[n][m];
    int arr_2[n][m];
    int arr_3[n][m];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d ", &arr_1[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d ", &arr_2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr_1[i][j]==arr_2[i][j]) {
                arr_3[i][j] = 0;
            }
            else {
                arr_3[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr_3[i][j]);
        }
        printf("\n");
    }
}