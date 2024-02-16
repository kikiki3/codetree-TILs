#include <stdio.h>

int main() {
    int arr[10];
    int count[7] = {0, };

    for (int i = 0; i < 10; i++) {
        scanf("%d ", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i < 7; i++) {
        printf("%d - %d\n", i, count[i]);
    }
}