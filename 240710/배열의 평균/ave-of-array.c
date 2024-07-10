#include <stdio.h>

int main() {
    int arr[2][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        float avg1 = 0;
        int sum1 = 0;
        for (int j = 0; j < 4; j++) {
            sum1 += arr[i][j];
        }
        avg1 = sum1/4.0;
        printf("%.1f ", avg1);
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        float avg2 = 0;
        int sum2 = 0;
        for (int j = 0; j < 2; j++) {
            sum2 += arr[j][i];
        }
        avg2 = sum2/2.0;
        printf("%.1f ", avg2);
    }
    printf("\n");

    int sum3 = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            sum3 += arr[i][j];
        }
    }
    
    float avg3 = sum3 / 8.0; // 전체 합을 8로 나눔
    printf("%.1f", avg3);
 
}