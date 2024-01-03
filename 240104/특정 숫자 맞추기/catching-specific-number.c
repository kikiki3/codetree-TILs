#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n < 25) {
            printf("Higher\n");
        }
        if (n > 25) {
            printf("Lower\n");
        }
        if (n == 25 ) {
            printf("Good");
            break;
        }
    }
}