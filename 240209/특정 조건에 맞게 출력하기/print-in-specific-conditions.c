#include <stdio.h>

int main() {
    int arr[100];
    int cnt = 0;

    for (int i = 0; i < 100; i++) {
        scanf("%d ", &arr[i]);
        if (arr[i] % 2 == 1) {
            arr[i] += 3;
        }
        else {
            arr[i] = arr[i] / 2;
        }
        cnt++;
        if (arr[i] == 0) {
            break;
        }
    }
    
    for (int i = 0; i < cnt-1; i++) {
        printf("%d ", arr[i]);
    }
    
}