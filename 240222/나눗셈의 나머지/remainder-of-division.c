#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr[10] = {0, };
    int count_arr[10] = {0, };

    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        if (a <= 1) {
            break;
        }
        arr[i] = a % b;
        a = a / b;
        cnt++;
    }

    for (int i = 0; i < cnt; i++) {
        count_arr[arr[i]]++;
    }

    int avg = 0;

    for (int i = 0; i < 10; i++) {
        avg += count_arr[i] * count_arr[i];
    }

    printf("%d", avg);
}