#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 2;

    int arr[100];

    arr[0] = 1;
    arr[1] = n;

    for (int i = 2; i < 100; i++) {
        arr[i] = arr[i-1] + arr[i-2];
        cnt++;
        if (arr[i] >= 100) {
            break;
        }
    }

    for (int i = 0; i < cnt; i++) {
        printf("%d ", arr[i]);
    }
}