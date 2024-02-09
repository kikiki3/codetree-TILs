#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[10];

    for (int i = 1; i < 100; i++) {
        arr[i] = n*i;
        if (arr[i] == 10*n) {
            break;
        }
    }

    if (n % 5 == 0) {
        for (int i = 1; i <= 2; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        for (int j = 1; j <= 10; j++) {
            printf("%d ", arr[j]);
        }
    }
    
    
}