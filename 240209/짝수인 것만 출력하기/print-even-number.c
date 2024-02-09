#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int a[100];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
        if (arr[i] % 2 == 0) {
            a[cnt] = arr[i];
            cnt++;
        }
    }
    for (int i = 0; i < cnt; i++) {
        printf("%d ", a[i]);
    }
}