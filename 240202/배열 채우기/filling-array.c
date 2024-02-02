#include <stdio.h>

int main() {
    int arr[10];
    int n;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0){
            n = i-1;
            break;
        }
        else {
            n = i;
        }
    }

    for (int j = n; j >= 0; j--) {
        printf("%d ", arr[j]);
    }
}