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
    for (int i = 1; i <= 10; i++) {
        printf("%d ", arr[i]);
    }
    
}