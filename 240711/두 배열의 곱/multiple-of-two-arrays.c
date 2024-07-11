#include <stdio.h>

int main() {
    int arr_1[3][3] = {0};
    int arr_2[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d ", &arr_1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d ", &arr_2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int mul = arr_1[i][j]*arr_2[i][j];
            printf("%d ", mul);
        }
        printf("\n");
    }
    
}