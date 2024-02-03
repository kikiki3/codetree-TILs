#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int cnt;
    int front = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &cnt);
        if (cnt % 2 == 0) {
            arr[front++] = cnt;
        }
    }

    for (int j = front-1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }
}