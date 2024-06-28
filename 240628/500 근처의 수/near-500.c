#include <stdio.h>

int main() {
    int a[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d ", &a[i]);
    }

    int max = a[0];
    int min = a[0];

    for (int i = 0; i < 10; i++) {
        if (a[i] < 500 && a[i] > max) {
            max = a[i];
        }
    }
    printf("%d ", max);

    for (int i = 0; i < 10; i++) {
        if (a[i] > 500) {
            min = a[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (min > a[i] && a[i] > 500) {
            min = a[i];
        }
    }
    printf("%d", min);
    
}