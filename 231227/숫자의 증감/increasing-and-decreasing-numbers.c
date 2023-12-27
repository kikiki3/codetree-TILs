#include <stdio.h>

int main() {
    char c;
    int n;
    scanf("%c %d", &c, &n);

    if (c == 'A') {
        for (int i = 0; i < n; i++) {
            printf("%d ", i+1);
        }
    }
    else {
        for (int i = n; i>0; i--) {
            printf("%d ", i);
        }
    }
}