#include <stdio.h>

int main() {
    int n[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d ", &n[i]);
    }

    int max_val = n[0];

    for (int i = 1; i < 10; i++) {
        if (n[i] > max_val) {
            max_val = n[i];
        }
    }

    printf("%d", max_val);
}