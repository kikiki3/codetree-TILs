#include <stdio.h>

int main() {
    int arr[100];

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            printf("%d", arr[i-1]+arr[i-2]+arr[i-3]);
            break;
        }

    }
}