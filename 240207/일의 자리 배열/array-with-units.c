#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[11];

    arr[1] = a;
    arr[2] = b;

    for (int i = 3; i < 11; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    for (int i = 1; i < 11; i++) {
        if (arr[i] >= 10) {
            arr[i] = arr[i] % 10;
        }
        printf("%d ", arr[i]);
    }
}